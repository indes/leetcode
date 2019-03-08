//
// Created by Li on 2019/3/8.
//

#include "Solution.h"

int Solution::coinChange(vector<int> &coins, int amount) {
    if (amount <= 0 or coins.empty()) {
        return 0;
    }
    vector<int> v(amount + 1, -1);
    for (auto coin:coins) {
        if (coin <= amount)
            v[coin] = 1;
    }

    for (int i = 1; i < amount + 1; ++i) {
        if (v[i] == 1) continue;
        int min = INT_MAX;
        bool no_ans = true;

        for (auto coin:coins) {
            if (coin < i and  v[coin]!=-1 and v[i - coin]!=-1) {
                no_ans = false;
                min = std::min(min, v[coin] + v[i - coin]);
            }
        }
        if (no_ans) {
            v[i] = -1;
        } else {
            v[i] = min;
        }
    }
    return *(v.end() - 1);
}
