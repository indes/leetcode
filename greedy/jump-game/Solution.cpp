//
// Created by Li on 2018/12/3.
//

#include "Solution.h"

bool Solution::canJump(vector<int> &nums) {
    if (nums.empty()) return true;
    int step = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        if (step == 0) return false;
        step--;
        step = step > nums[i] ? step : nums[i];

    }

    return true;
}
