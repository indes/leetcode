//
// Created by Li on 2019/4/10.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <climits>
#include <algorithm>

class Solution {
public:
    int integerBreak(int n) {
        std::vector<int> dp(n + 1);
        dp[0] = 0;
        dp[1] = 0;
        dp[2] = 1;
        for (int i = 3; i <= n; ++i) {
            int max_ = INT_MIN;
            for (int j = 1; j <= i / 2; ++j) {
                int local_max = dp[j] * dp[i - j];
                local_max = std::max(local_max, dp[j] * (i - j));
                local_max = std::max(local_max, j * (dp[i - j]));
                local_max = std::max(local_max, j * (i - j));

                max_ = max_ > local_max ? max_ : local_max;
            }
            dp[i] = max_;
        }
        return dp.back();
    }
};


#endif //LEETCODE_SOLUTION_H
