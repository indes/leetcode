//
// Created by Li on 2018/11/27.
//

#include "Solution.h"

int Solution::climbStairs(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    for (int i = 2; i < n; ++i) {
        v.push_back(v[i - 1] + v[i - 2]);
    }


    return v.back();
}
