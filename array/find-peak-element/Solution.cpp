//
// Created by Li on 2018/11/17.
//

#include "Solution.h"

int Solution::findPeakElement(vector<int> &nums) {
    if (nums.empty()) return -1;
    int front = 0, tail = nums.size() - 1;
    int mid = 0;
    while (front <= tail) {
        mid = front + (tail - front) / 2;
        if ((mid == 0 or nums[mid - 1] > nums[mid]) and (mid == nums.size() - 1 or nums[mid] > nums[mid + 1])) {
            return mid;
        } else if (mid > 0 and nums[mid - 1] > nums[mid]) {
            tail = mid - 1;
        } else {
            front = mid + 1;
        }
    }

    return mid;
}
