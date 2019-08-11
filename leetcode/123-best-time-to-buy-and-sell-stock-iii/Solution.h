//
// Created by Li on 2019/4/16.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <limits>
#include <algorithm>

using std::vector;
using std::numeric_limits;
using std::max;
using std::min;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int fst_buy = numeric_limits<int>::min(), fst_sell = 0;
        int sec_buy = numeric_limits<int>::min(), sec_sell = 0;
        for (auto price:prices) {
            fst_buy = max(fst_buy, -price);
            fst_sell = max(fst_sell, price + fst_buy);
            sec_buy = max(sec_buy, fst_sell - price);
            sec_sell = max(sec_sell, price + sec_buy);
        }
        return sec_sell;
    }
};


#endif //LEETCODE_SOLUTION_H
