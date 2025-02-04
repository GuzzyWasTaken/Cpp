#include "PmergeMe.hpp"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Error: Provide at least one positive integer as argument." << std::endl;
        return EXIT_FAILURE;
    }

    PmergeMe sorter;
    sorter.processInput(argv);

    return EXIT_SUCCESS;
}
