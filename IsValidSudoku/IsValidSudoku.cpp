//
// Created by Li on 2018/9/24.
//

#include "IsValidSudoku.h"

bool IsValidSudoku::check(vector<char> chars) {
    std::set<char> c_set;
    for (vector<char>::iterator iter = chars.begin(); iter != chars.end(); ++iter) {
        if (*iter != '.') {
            if (c_set.count(*iter)) return false;
            c_set.insert(*iter);
        }
    }
    return true;
}

bool IsValidSudoku::isValidSudoku(vector<vector<char>> &board) {
    vector<vector<char>> line;
    for (vector<vector<char>>::iterator iter = board.begin(); iter != board.end(); ++iter) {
        if (!check(*iter)) return false;

        for (vector<char>::iterator iter2 = (*iter).begin(); iter2 != (*iter).end(); ++iter2) {
            std::cout << *iter2 << std::endl;
        }

    }
    return true;
}