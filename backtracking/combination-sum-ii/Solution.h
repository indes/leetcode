//
// Created by Li on 2019/3/11.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        std::sort(candidates.begin(), candidates.end());
        this->candidates = &candidates;
        this->target = target;

        vector<int> curr;
        combinationSum2_dfs(curr, 0, 0);
        return ans;
    }

private:
    int target;
    vector<int> *candidates;
    vector<vector<int>> ans;

    void combinationSum2_dfs(vector<int> &curr, int sum, int level) {
        if (sum == target) {
            ans.push_back(curr);
            return;
        }
        if (sum > target) {
            return;
        }

        for (int i = level; i < candidates->size(); ++i) {
            int now = (*candidates)[i];
            sum += now;
            curr.push_back(now);
            combinationSum2_dfs(curr, sum, i + 1);
            curr.pop_back();
            sum -= now;
            while (i < candidates->size() - 1 and (*candidates)[i] == (*candidates)[i + 1]) {
                ++i;
            }
        }

    }
};


#endif //LEETCODE_SOLUTION_H
