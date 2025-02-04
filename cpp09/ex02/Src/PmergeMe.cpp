#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _vec_time(0), _deq_time(0) {}

PmergeMe::PmergeMe(const PmergeMe& other) {
    _vec_time = other._vec_time;
    _deq_time = other._deq_time;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
    if (this != &other) {
        _vec_time = other._vec_time;
        _deq_time = other._deq_time;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

// Validate and parse input
void PmergeMe::processInput(char** argv) {
    std::vector<int> vec;
    std::deque<int> deq;
    
    for (size_t i = 1; argv[i] != NULL; i++) {
        char* end;
        long num = std::strtol(argv[i], &end, 10);
        
        if (*end != '\0' || num <= 0 || num > std::numeric_limits<int>::max()) {
            std::cerr << "Error: Invalid input detected." << std::endl;
            exit(EXIT_FAILURE);
        }

        vec.push_back(static_cast<int>(num));
        deq.push_back(static_cast<int>(num));
    }

    printResults(vec, deq);
}

std::vector<int> PmergeMe::generateJacobsthalSequence(int n) {
    std::vector<int> jacob;
    // If there is only one element, there is nothing to insert.
    if (n < 2)
        return jacob;

    // The very first insertion index is always 1.
    jacob.push_back(1);

    int j_prev = 1;
    int j_curr = 3;
    while (j_curr < n) {
        jacob.push_back(j_curr);
        int next = j_curr + 2 * j_prev;
        j_prev = j_curr;
        j_curr = next;
    }

    // Append any missing indices (from 1 to n-1) that are not already in the sequence.
    // Do not sort the sequence afterward because the insertion order is defined by this arrangement.
    for (int i = 1; i < n; i++) {
        if (std::find(jacob.begin(), jacob.end(), i) == jacob.end()) {
            jacob.push_back(i);
        }
    }
    
    return jacob;
}


// Merge-Insertion Sort for std::vector
// splits the array into smaller parts until the sub arrays are <= 5 elements
void PmergeMe::mergeSortVector(std::vector<int>& vec, int start, int end) {
    if (end - start > 5) {
        int mid = (start + end) / 2;
        mergeSortVector(vec, start, mid);
        mergeSortVector(vec, mid + 1, end);
        mergeVector(vec, start, mid, end);  // Call to mergeVector
    } else {
        insertSortVector(vec, start, end);
    }
}

// Jacobsthal Insertion Sort for std::vector
// Revised Jacobsthal Insertion Sort for std::vector using binary insertion.
void PmergeMe::insertSortVector(std::vector<int>& vec, int start, int end) {
    int n = end - start + 1;
    if (n < 2)
        return;

    // We'll build a sorted temporary vector.
    std::vector<int> sorted;
    sorted.push_back(vec[start]); // Start with the first element.

    // Keep track of which positions (relative to the subarray) have been inserted.
    std::vector<bool> inserted(n, false);
    inserted[0] = true;

    // Generate the Jacobsthal ordering for indices 1 .. n-1.
    std::vector<int> jacobIndices = generateJacobsthalSequence(n);

    // First, process the indices in the Jacobsthal order.
    for (size_t idx = 0; idx < jacobIndices.size(); idx++) {
        int pos = jacobIndices[idx];
        if (pos >= n)
            break;

        int value = vec[start + pos];

        // Perform manual binary search to find the insertion position.
        size_t insertPos = 0;
        for (size_t j = 0; j < sorted.size(); j++) {
            if (sorted[j] >= value) {
                insertPos = j;
                break;
            }
            insertPos = j + 1;
        }

        // Insert the value at the correct position.
        sorted.insert(sorted.begin() + insertPos, value);
        inserted[pos] = true;
    }

    // Next, process any indices that were not inserted yet, in natural order.
    for (int i = 1; i < n; i++) {
        if (!inserted[i]) {
            int value = vec[start + i];

            // Perform manual binary search to find the insertion position.
            size_t insertPos = 0;
            for (size_t j = 0; j < sorted.size(); j++) {
                if (sorted[j] >= value) {
                    insertPos = j;
                    break;
                }
                insertPos = j + 1;
            }

            // Insert the value at the correct position.
            sorted.insert(sorted.begin() + insertPos, value);
        }
    }

    // Copy back the sorted values into the original vector.
    for (int i = 0; i < n; i++) {
        vec[start + i] = sorted[i];
    }

}

// Merge function for vector (missing function)
void PmergeMe::mergeVector(std::vector<int>& vec, int start, int mid, int end) {
    std::vector<int> left(vec.begin() + start, vec.begin() + mid + 1);
    std::vector<int> right(vec.begin() + mid + 1, vec.begin() + end + 1);

    size_t i = 0, j = 0, k = start;

    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            vec[k++] = left[i++];
        } else {
            vec[k++] = right[j++];
        }
    }

    while (i < left.size()) {
        vec[k++] = left[i++];
    }

    while (j < right.size()) {
        vec[k++] = right[j++];
    }
}


// Merge-Insertion Sort for std::deque
void PmergeMe::mergeSortDeque(std::deque<int>& deq, int start, int end) {
    if (end - start > 5) {
        int mid = (start + end) / 2;
        mergeSortDeque(deq, start, mid);
        mergeSortDeque(deq, mid + 1, end);
        mergeDeque(deq, start, mid, end);  // Call to mergeDeque
    } else {
        insertSortDeque(deq, start, end);
    }
}

// Jacobsthal Insertion Sort for std::deque
// Revised Jacobsthal Insertion Sort for std::deque using binary insertion.
void PmergeMe::insertSortDeque(std::deque<int>& deq, int start, int end) {
    int n = end - start + 1;
    if (n < 2)
        return;

    // Temporary deque to hold the sorted elements.
    std::deque<int> sorted;
    sorted.push_back(deq[start]); // Start with the first element.

    // Keep track of inserted elements
    std::vector<bool> inserted(n, false);
    inserted[0] = true;

    // Generate Jacobsthal sequence for insertion order
    std::vector<int> jacobIndices = generateJacobsthalSequence(n);

    // Insert elements following Jacobsthal order
    for (size_t idx = 0; idx < jacobIndices.size(); idx++) {
        int pos = jacobIndices[idx];
        if (pos >= n)
            break;

        int value = deq[start + pos];

        // Perform manual binary search to find insertion position
        size_t insertPos = 0;
        for (size_t j = 0; j < sorted.size(); j++) {
            if (sorted[j] >= value) {
                insertPos = j;
                break;
            }
            insertPos = j + 1;
        }

        // Insert value at the correct position
        sorted.insert(sorted.begin() + insertPos, value);
        inserted[pos] = true;
    }

    // Insert remaining elements in natural order
    for (int i = 1; i < n; i++) {
        if (!inserted[i]) {
            int value = deq[start + i];

            // Perform manual binary search to find insertion position
            size_t insertPos = 0;
            for (size_t j = 0; j < sorted.size(); j++) {
                if (sorted[j] >= value) {
                    insertPos = j;
                    break;
                }
                insertPos = j + 1;
            }

            // Insert value at the correct position
            sorted.insert(sorted.begin() + insertPos, value);
        }
    }

    // Copy sorted elements back to original deque
    for (int i = 0; i < n; i++) {
        deq[start + i] = sorted[i];
    }
}

// Merge function for deque 
void PmergeMe::mergeDeque(std::deque<int>& deq, int start, int mid, int end) {
    std::deque<int> left(deq.begin() + start, deq.begin() + mid + 1);
    std::deque<int> right(deq.begin() + mid + 1, deq.begin() + end + 1);

    size_t i = 0, j = 0, k = start;

    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            deq[k++] = left[i++];
        } else {
            deq[k++] = right[j++];
        }
    }

    while (i < left.size()) {
        deq[k++] = left[i++];
    }

    while (j < right.size()) {
        deq[k++] = right[j++];
    }
}

// Print results and measure times
void PmergeMe::printResults(std::vector<int>& vec, std::deque<int>& deq) {
    std::cout << "Before:\t";
    for (int n : vec) std::cout << n << " ";
    std::cout << std::endl;

    struct timeval start, end;
    
    gettimeofday(&start, NULL);
    mergeSortVector(vec, 0, vec.size() - 1);
    gettimeofday(&end, NULL);
    _vec_time = (end.tv_usec - start.tv_usec);

    gettimeofday(&start, NULL);
    mergeSortDeque(deq, 0, deq.size() - 1);
    gettimeofday(&end, NULL);
    _deq_time = (end.tv_usec - start.tv_usec);

    std::cout << "After:\t";
    for (int n : vec) std::cout << n << " ";
    std::cout << std::endl;

    std::cout << "Time to process with std::vector: " << _vec_time << " us" << std::endl;
    std::cout << "Time to process with std::deque: " << _deq_time << " us" << std::endl;
}
