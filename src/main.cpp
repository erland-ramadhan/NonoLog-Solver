#include <iostream>
#include "NonogramSolver.h"
#include "PuzzleParser.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <puzzle file>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    NonogramSolver solver;

    if (!solver.loadPuzzle(filename)) {
        std::cerr << "Failed to load puzzle." << std::endl;
        return 1;
    }

    if (solver.solve()) {
        std::cout << "Puzzle solved:\n";
        solver.printSolution();
    } else {
        std::cout << "No solution found." << std::endl;
    }

    return 0;
}

