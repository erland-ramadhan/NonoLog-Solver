#include "PuzzleParser.h"
#include <fstream>
#include <sstream>
#include <iostream>

bool PuzzleParser::parseFile(const std::string& filename, std::vector<std::vector<int>>& row_clues, std::vector<std::vector<int>>& col_clues) {
    std::ifstream file(filename);
    if (!file.is_open()) return false;

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        char type;
        iss >> type;
        std::vector<int> clues;

        int value;
        while (iss >> value) {
            clues.push_back(value);
        }

        if (type == 'r') {
            row_clues.push_back(clues);
        } else if (type == 'c') {
            col_clues.push_back(clues);
        }
    }
    return true;
}

