#ifndef NONOGRAMSOLVER_H
#define NONOGRAMSOLVER_H

#include <vector>
#include <string>

class NonogramSolver {
public:
    bool loadPuzzle(const std::string& filename);
    bool solve();
    void printSolution() const;

private:
    bool backtrack(int row, int col);

    std::vector<std::vector<int>> row_clues;
    std::vector<std::vector<int>> col_clues;
    std::vector<std::vector<char>> grid;
};

#endif

