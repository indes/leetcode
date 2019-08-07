//
// Created by Li on 2019/8/7.
//

#ifndef LEETCODE_SOLUTION_HPP
#define LEETCODE_SOLUTION_HPP

#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if (prices.size() < 2) return 0;
        int ans = 0;
        for (int i = 1; i < prices.size(); ++i) {
            auto diff = prices[i] - prices[i - 1];
            if (diff > 0) ans += diff;
        }
        return ans;
    }
};

#endif //LEETCODE_SOLUTION_HPP
