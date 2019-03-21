//
// Created by Li on 2019/3/10.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>


using std::vector;


class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        this->k = k;
        this->n = n;
        vector<int> v1;

        combine_dfs(v1, 1);
        return this->ans;
    }

private:
    vector<vector<int>> ans;
    int k;
    int n;

    void combine_dfs(vector<int> &curr, int level) {
        if (curr.size() == k) {
            ans.push_back(curr);
            return;
        }
        if (curr.size() > k) return;
        if (level == 1) {
            for (int i = 1; i <= n; ++i) {
                curr.push_back(i);
                combine_dfs(curr, level + 1);
                curr.pop_back();
            }
        } else {
            for (int i = curr[level - 2] + 1; i <= n; ++i) {
                curr.push_back(i);
                combine_dfs(curr, level + 1);
                curr.pop_back();
            }
        }


    };
};

#endif //LEETCODE_SOLUTION_H
