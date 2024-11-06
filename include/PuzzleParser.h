#ifndef PUZZLEPARSER_H
#define PUZZLEPARSER_H

#include <string>
#include <vector>

class PuzzleParser {
public:
    bool parseFile(const std::string& filename, std::vector<std::vector<int>>& row_clues, std::vector<std::vector<int>>& col_clues);
};

#endif

