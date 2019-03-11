//
// Created by Li on 2019/3/11.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <algorithm>

using std::vector;

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums) {

        ans.push_back(vector<int>());
        std::sort(nums.begin(), nums.end());
        if (nums.empty()) {
            return ans;
        }
        this->nums = &nums;
        vector<int> curr;
        subsetsWithDupDfs(curr, 0);
        return ans;
    }

private:
    vector<vector<int>> ans;
    vector<int> *nums;

    void subsetsWithDupDfs(vector<int> &curr, int level) {
        if (nums->size() == level) {
            return;
        }

        for (int i = level; i < nums->size(); ++i) {
            int current_int = (*nums)[i];
            curr.push_back(current_int);
            ans.push_back(curr);
            subsetsWithDupDfs(curr, i + 1);
            curr.pop_back();
            while (i < nums->size() - 1 and (*nums)[i] == (*nums)[i + 1]) {
                i++;
            }
        }
    }
};


#endif //LEETCODE_SOLUTION_H
