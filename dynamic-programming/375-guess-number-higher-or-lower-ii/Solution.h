//
// Created by Li on 2019/4/13.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <climits>
#include <limits>

using namespace std;

class Solution {
public:
    int getMoneyAmount(int n) {


        vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));
        for (int i = n; i > 0; --i) {
            for (int j = i; j <= n; ++j) {
                if (i == j) dp[i][j] = 0;
                else {
                    dp[i][j] = numeric_limits<int>::max();
                    for (int x = i; x <= j; ++x) {
                        dp[i][j] = min(dp[i][j], x + max(dp[1 + x][j], dp[i][x - 1]));
                    }
                }
            }
        }
        return dp[1][n];
    }
};

#endif //LEETCODE_SOLUTION_H
