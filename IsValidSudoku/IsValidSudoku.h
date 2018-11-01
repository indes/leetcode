//
// Created by Li on 2018/9/24.
//

#ifndef LEETCODE_ISVALIDSUDOKU_H
#define LEETCODE_ISVALIDSUDOKU_H

#include <vector>
#include <iostream>
#include <set>

using std::vector;

class IsValidSudoku {
public:
    bool isValidSudoku(vector<vector<char>> &board);

    bool check(vector<char> chars);
};


#endif //LEETCODE_ISVALIDSUDOKU_H
