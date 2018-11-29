//
// Created by Li on 2018/11/29.
//

#include "Solution.h"

int Solution::numTrees(int n) {
    if (n <= 0) return 0;
    vector<int> v{1, 1};

    for (int i = 2; i <= n; ++i) {
        int num = 0;
        for (int j = 0; j < i; ++j) {
            num += v[j] * v[i - j - 1];
        }
        v.push_back(num);
    }
    return v[n];
}
