//
// Created by Li on 2018/11/28.
//

#include "Solution.h"

int Solution::minPathSum(vector<vector<int>> &grid) {
    if (grid.empty() or grid[0].empty()) return -1;
    int m = grid.size();
    int n = grid[0].size();
    int v[m][n];
    v[0][0] = grid[0][0];
    for (int i = 1; i < n; ++i) {
        v[0][i] = grid[0][i] + v[0][i - 1];
    }

    for (int j = 1; j < m; ++j) {
        v[j][0] = grid[j][0] + v[j - 1][0];
        for (int i = 1; i < n; ++i) {
            v[j][i] = grid[j][i] + min(v[j - 1][i], v[j][i - 1]);
        }
    }


    return v[m - 1][n - 1];
}
