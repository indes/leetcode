//
// Created by Li on 2018/9/18.
//

#include "MaxProfit.h"

int MaxProfit::maxProfit(vector<int> &nums) {
    if (nums.empty()) return 0;
    int profit = 0;
    for (vector<int>::iterator iter = ++nums.begin(); iter != nums.end(); ++iter) {
        if (*iter > *(iter - 1)) {
            profit += *iter - *(iter - 1);
        }
    }
    return profit;
}
