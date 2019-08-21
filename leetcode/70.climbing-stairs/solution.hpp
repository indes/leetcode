//
// Created by Li on 2018/11/27.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    int climbStairs(int n){
        if (n == 1) return 1;
        if (n == 2) return 2;

        vector<int> v;
        v.push_back(1);
        v.push_back(2);
        for (int i = 2; i < n; ++i) {
            v.push_back(v[i - 1] + v[i - 2]);
        }
        return v.back();
    };
};


#endif //LEETCODE_SOLUTION_H
