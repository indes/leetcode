//
// Created by Li on 2019/4/16.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <algorithm>
#include <limits>

using std::vector;
using std::numeric_limits;
using std::max;

class Solution {
public:
    int maxProfit(int k, vector<int> &prices) {
        if (prices.empty() or k == 0) return 0;
        if (k >= prices.size() / 2) {
            int ans = 0;
            for (int i = 1; i < prices.size(); ++i) {
                if (prices[i] > prices[i - 1]) {
                    ans += prices[i] - prices[i - 1];
                }
            }
            return ans;
        } else {
            vector<int> buy(k, numeric_limits<int>::min());
            vector<int> sell(k, numeric_limits<int>::min());

            for (auto p:prices) {
                buy[0] = max(buy[0], -p);
                sell[0] = max(sell[0], p + buy[0]);
                for (int i = 1; i < k; ++i) {
                    buy[i] = max(buy[i], -p + sell[i - 1]);
                    sell[i] = max(sell[i], p + buy[i]);
                }
            }
            return sell.back();
        }

    }
};


#endif //LEETCODE_SOLUTION_H
