//
// Created by Li on 2018/12/1.
//

#include "Solution.h"

int Solution::rob(vector<int> &nums) {

    if (nums.empty()) return 0;
    if (nums.size() == 1)return nums[0];
    vector<int> v{0, nums[0]};
    for (int i = 2; i <= nums.size(); ++i) {
        v.push_back(max(v[i - 1], nums[i - 1] + v[i - 2]));
    }


    return v.back();
}
