//
// Created by Li on 2018/11/16.
//

#include "Solution.h"

int Solution::searchInsert(vector<int> &nums, int target) {

    if (nums.empty()) return -1;
    int front = 0, tail = nums.size() - 1, mid = 0;
    while (front <= tail) {
        mid = front + (tail - front) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            tail = mid - 1;
        } else {
            front = mid + 1;
        }
    }

    return front;
}
