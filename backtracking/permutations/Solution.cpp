//
// Created by Li on 2019/3/10.
//

#include "Solution.h"

vector<vector<int>> Solution::permute(vector<int> &nums) {
    dfs(nums, 0);
    return this->ans;
}

void Solution::dfs(vector<int> &nums, int current) {
    if (current == nums.size() - 1) {
        this->ans.push_back(nums);
        return;
    }
    for (int i = current; i < nums.size(); ++i) {
        swap(nums[i], nums[current]);
        dfs(nums, current + 1);
        swap(nums[i], nums[current]);
    }

}
