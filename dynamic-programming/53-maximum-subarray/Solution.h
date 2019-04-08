//
// Created by Li on 2018/11/28.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums);

private:
    int maxSubArray(vector<int> &nums, int s, int e);
};


#endif //LEETCODE_SOLUTION_H
