//
// Created by Li on 2018/11/15.
//

#include "Solution.h"

bool Solution::searchMatrix(vector<vector<int>> &matrix, int target) {
    if (matrix.empty()) return false;
    if (matrix[0].empty()) return false;

    int row_num = 0;

    for (; row_num < matrix.size(); ++row_num) {

        if (matrix[row_num][0] < target && matrix[row_num][matrix[0].size() - 1]) {
            return find(matrix[row_num], target);
        }
    }

    return false;
}

bool Solution::find(vector<int> v, int target) {
    //二分查找

    int tail = v.size(), front = 0;

    int mid = tail / 2;
    while (mid != 0) {
        if (v[mid] == target) return true;
        else if (v[mid] > target) {
            tail = mid;
            mid /= 2;
        } else {
            front = mid;
            mid += (tail - mid) / 2;
        }
    }
    return false;
}
