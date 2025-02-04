#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <sys/time.h>
#include <cstdlib>
#include <limits>
#include <stdexcept>
#include <algorithm>

class PmergeMe {
private:
    long _vec_time;
    long _deq_time;

    void insertSortVector(std::vector<int>& vec, int start, int end);
    void mergeSortVector(std::vector<int>& vec, int start, int end);
    void mergeVector(std::vector<int>& vec, int start, int mid, int end);

    void insertSortDeque(std::deque<int>& deq, int start, int end);
    void mergeSortDeque(std::deque<int>& deq, int start, int end);
    void mergeDeque(std::deque<int>& deq, int start, int mid, int end);

    std::vector<int> generateJacobsthalSequence(int n);

public:
    PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();

    void processInput(char** argv);
    void printResults(std::vector<int>& vec, std::deque<int>& deq);
};

#endif
