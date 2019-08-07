//
// Created by Li on 2019/4/16.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <algorithm>

using std::min;
using std::max;
using std::vector;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if(prices.empty())
            return 0;
        int max_p = 0;
        int min_price = prices[0];
        for (auto price:prices) {
            max_p = max(max_p, price - min_price);
            min_price = min(min_price, price);
        }
        return max_p;
    }
};


#endif //LEETCODE_SOLUTION_H
