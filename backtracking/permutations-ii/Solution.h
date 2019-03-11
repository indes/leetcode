//
// Created by Li on 2019/3/11.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <algorithm>

using std::vector;
using std::sort;

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int> &nums) {
        if (nums.empty()) {
            return ans;
        }
        sort(nums.begin(), nums.end());
        this->nums = &nums;
        vector<int> curr;
        is_visited = vector<bool>(nums.size(), false);
        permuteUniqueDfs(curr);
        return ans;
    }

private:
    vector<vector<int>> ans;
    vector<int> *nums;
    vector<bool> is_visited;

    void permuteUniqueDfs(vector<int> &curr) {
        if (curr.size() == (*nums).size()) {
            ans.push_back(curr);
            return;
        }
        for (int i = 0; i < (*nums).size(); ++i) {
            if (is_visited[i] == false) {
                is_visited[i] = true;
                curr.push_back((*nums)[i]);
                permuteUniqueDfs(curr);
                curr.pop_back();
                is_visited[i] = false;
                while (i < (*nums).size() - 1 and (*nums)[i] == (*nums)[i + 1]) {
                    ++i;
                }
            }

        }
    }
};

#endif //LEETCODE_SOLUTION_H
