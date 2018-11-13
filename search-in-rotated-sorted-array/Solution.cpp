//
// Created by Li on 2018/11/13.
//

#include "Solution.h"

int Solution::search(vector<int> &nums, int target) {
    if (nums.empty()) return -1;

    if (target >= nums[0]) {
        for (int i = 0; i < nums.size() && (nums[i] > nums[i - 1] or i == 0); ++i) {
            if (nums[i] == target) return i;
        }
    } else if (target <= nums[nums.size() - 1]) {
        for (int i = nums.size() - 1; i >= 0 && (nums[i] < nums[i + 1] or i == nums.size() - 1); --i) {
            if (nums[i] == target) return i;
        }
    }
    return -1;
}
