//
// Created by Li on 2018/11/15.
//

#include "Solution2.h"

bool Solution2::searchMatrix(vector<vector<int>> &matrix, int target) {
    if (matrix.empty()) return false;
    if (matrix[0].empty()) return false;
    int row_num = 0, col_num = matrix[0].size() - 1;

    while (row_num < matrix.size() && col_num >= 0) {
        if(matrix[row_num][col_num] == target) return true;
        else if(matrix[row_num][col_num] >target) --col_num;
        else ++row_num;
    }
    return false;

}
