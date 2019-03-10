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
    vector<vector<int>> permute(vector<int> &nums);

private:
    vector<vector<int>> ans;

    void dfs(vector<int> &nums, int current);
};


#endif //LEETCODE_SOLUTION_H
