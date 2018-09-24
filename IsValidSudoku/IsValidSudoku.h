//
// Created by Li on 2018/9/24.
//

#ifndef LEETCODE_ISVALIDSUDOKU_H
#define LEETCODE_ISVALIDSUDOKU_H

#include <vector>
#include <iostream>

using std::vector;

class IsValidSudoku {
public:
    bool isValidSudoku(vector<vector<char>> &board) {
        //line
        for (auto const &i:board) {
            std::cout << &i << std::endl;
        }
    }
};


#endif //LEETCODE_ISVALIDSUDOKU_H
