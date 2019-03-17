//
// Created by Li on 2018/11/17.
//

#include "Solution.h"

int Solution::findPeakElement(vector<int> &nums) {
    int front = 0, tail = nums.size() - 1;

    while (front < tail) {
        int mid = front + (tail - front) / 2;
        if (nums[mid] < nums[mid + 1]) {
            front = mid + 1;
        } else {
            tail = mid;
        }
    }
    return tail;
}
