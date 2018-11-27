//
// Created by Li on 2018/11/27.
//

#include "Solution.h"

int Solution::uniquePaths(int m, int n) {
    vector<vector<int>> v;
    v.push_back(vector<int>(n, 1));
    for (int i = 1; i < m; ++i) {
        v.push_back(vector<int>(n, 1));
        for (int j = 1; j < n; ++j) {
            v[i][j] = v[i - 1][j] + v[i][j - 1];
        }
    }


    return v[m - 1][n - 1];
}
