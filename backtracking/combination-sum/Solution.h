//
// Created by Li on 2019/3/10.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <algorithm>

using std::vector;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
        std::sort(candidates.begin(), candidates.end());
        this->target = target;
        cans = &candidates;
        vector<int> v1;
        combination_dfs(v1, 0, 0);
        return ans;
    }

private:
    vector<vector<int>> ans;
    int target;
    vector<int> *cans;

    void combination_dfs(vector<int> &curr, int sum, int level) {
        if (sum == target) {
            ans.push_back(curr);
            return;
        }
        if (sum > target) {
            return;
        }
        for (int i = level; i < cans->size(); ++i) {
            sum += (*cans)[i];
            curr.push_back((*cans)[i]);
            combination_dfs(curr, sum, i);
            curr.pop_back();
            sum -= (*cans)[i];
        }

    }
};


#endif //LEETCODE_SOLUTION_H
