//
// Created by Li on 2018/12/1.
//

#include "Solution.h"

int Solution::rob(vector<int> &nums) {

    if (nums.empty()) return 0;
    if (nums.size() == 1)return nums[0];
    vector<int> v{nums[0], nums[1]};
    for (int i = 2; i < nums.size(); ++i) {
        v.push_back(nums[i] + v[i - 2]);
    }


    return max(*(v.end() - 2), v.back());
}
