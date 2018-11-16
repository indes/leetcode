//
// Created by Li on 2018/11/15.
//

#include "Solution.h"

bool Solution::searchMatrix(vector<vector<int>> &matrix, int target) {
    if (matrix.empty()) return false;
    if (matrix[0].empty()) return false;

    int row_num = 0;

    for (; row_num < matrix.size(); ++row_num) {

        if (matrix[row_num][0] <= target && target <= matrix[row_num][matrix[0].size() - 1]) {
            return find_element(matrix[row_num], target);
        }
    }

    return false;
}

bool Solution::find_element(vector<int> v, int target) {
    //二分查找
    int front = 0, tail = v.size() - 1, mid = tail / 2;

    while (front <= tail) {
        mid = front + (tail - front) / 2;
        if (v[mid] > target) {
            tail = mid - 1;
        } else if (v[mid] < target) {
            front = mid + 1;
        } else {
            return true;
        }
    }
    return false;
}
