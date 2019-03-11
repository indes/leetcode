//
// Created by Li on 2019/3/10.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int> &nums) {
        if (nums.empty()) {
            return ans;
        }
        vector<int> curr;
        is_visit = vector<bool>(nums.size(), false);
        this->nums = &nums;
        permute_dfs(curr);
        return ans;
    };

private:
    vector<vector<int>> ans;
    vector<int> *nums;
    vector<bool> is_visit;

    void permute_dfs(vector<int> &curr) {
        if (curr.size() == nums->size()) {
            ans.push_back(curr);
            return;
        }

        for (int i = 0; i < nums->size(); ++i) {
            if (is_visit[i] == false) {
                is_visit[i] = true;
                int current_int = (*nums)[i];
                curr.push_back(current_int);
                permute_dfs(curr);
                curr.pop_back();
                is_visit[i] = false;
            }
        }
    };
};


#endif //LEETCODE_SOLUTION_H
