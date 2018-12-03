//
// Created by Li on 2018/12/3.
//

#include "Solution.h"

int Solution::canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
    int sum = 0;
    int total = 0;
    int k = 0;

    for (int i = 0; i < gas.size(); ++i) {
        sum += gas[i] - cost[i];
        if (sum < 0) {
            k = i + 1;
            sum = 0;
        }

        total += gas[i] - cost[i];
    }

    if (total < 0) {
        return -1;
    } else {
        return k;
    }
}
