//
// Created by Li on 2019/4/10.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(const vector<int> &cost) {
        vector<int> v(cost.size(), 0);
        v[0] = cost[0];
        v[1] = cost[1];

        for (int i = 2; i < cost.size(); ++i) {
            v[i] = min(v[i-1],v[i-2]) +cost[i];
        }

        return min(v.back(),*(v.end()-2));
    }
};

#endif //LEETCODE_SOLUTION_H
