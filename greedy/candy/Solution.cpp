//
// Created by Li on 2018/12/4.
//

#include "Solution.h"

int Solution::candy(vector<int> &ratings) {
    if (ratings.empty()) return 0;
    vector<int> v(ratings.size(), 1);

    for (int i = 1; i < ratings.size(); ++i) {
        if (ratings[i] > ratings[i - 1]) {
            v[i] = v[i - 1] + 1;
        }
    }

    for (int j = ratings.size() - 2; j >= 0; --j) {
        if (ratings[j] > ratings[j + 1]) {
            if (v[j] <= v[j + 1]) {
                v[j] = v[j + 1] + 1;
            }
        }
    }

    int count = 0;
    for (auto num:v) count += num;
    return count;
}
