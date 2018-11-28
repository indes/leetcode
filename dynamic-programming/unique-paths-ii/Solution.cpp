//
// Created by Li on 2018/11/27.
//

#include "Solution.h"

int Solution::uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
    if (obstacleGrid.empty() or obstacleGrid[0].empty()) return 0;
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    int v[m][n];
    v[0][0] = obstacleGrid[0][0] ? 0 : 1;
    for (int i = 1; i < n; ++i) {
        v[0][i] = obstacleGrid[0][i] ? 0 : v[0][i - 1];
    }

    for (int j = 1; j < m; ++j) {
        v[j][0] = obstacleGrid[j][0] ? 0 : v[j - 1][0];
        for (int i = 1; i < n; ++i) {
            v[j][i] = obstacleGrid[j][i] ? 0 : v[j - 1][i] + v[j][i - 1];
        }
    }

    return v[m - 1][n - 1];
}
