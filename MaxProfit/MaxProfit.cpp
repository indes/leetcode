//
// Created by Li on 2018/9/18.
//

#include "MaxProfit.h"

int MaxProfit::maxProfit(vector<int> &nums) {
    if (nums.size() < 2) return 0;
    int profit = 0;
    for (vector<int>::iterator iter1 = nums.begin(),
                 iter2 = iter1 + 1;
         iter2 != nums.end();
         ++iter1, ++iter2) {
        if (*iter2 > *iter1) profit += *iter2 - *iter1;

    }


    return 0;
}
