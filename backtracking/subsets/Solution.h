//
// Created by Li on 2019/3/10.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using std::vector;

class Solution {
public:
    vector<vector<int>> subsets(vector<int> &nums) {
        if (nums.empty()) {
            return vector<vector<int>>({vector<int>()});
        }

        this->nums = &nums;
        for (int i = 0; i <= nums.size(); ++i) {
            vector<int> curr;
            subsets_dfs(curr, 0, i);
        }

        return this->ans;
    }

private:
    vector<vector<int>> ans;
    vector<int> *nums;

    void subsets_dfs(vector<int> &curr, int level, int length) {
        if (level == length) {
            ans.push_back(curr);
            return;
        }
        if (level > length) {
            return;
        }

        for (int i = level; i < nums->size(); ++i) {
            int ith_int = (*nums)[i];
            curr.push_back(ith_int);
            subsets_dfs(curr, i + 1, length);
            curr.pop_back();
        }

    }
};


#endif //LEETCODE_SOLUTION_H
