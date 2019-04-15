//
// Created by Li on 2019/4/15.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <limits>
#include <algorithm>
#include <deque>
#include <cmath>

using std::deque;
using std::vector;
using std::numeric_limits;
using std::min;

class Solution {
public:
    int numSquares_math(int n) {
        vector<int> v;
        for (int i = 1; i * i <= n; ++i) {
            v.push_back(i * i);
        }
        int ans = 0;
        while (n > 0) {
            while (v.back() > n) {
                v.pop_back();
            }
            n -= v.back();
            ans++;
        }

        return ans;
    }

    int numSquares(int n) {
        vector<int> v(n + 1, numeric_limits<int>::max());
        v[0] = 0;
        for (int j = 1; j <= n; ++j) {
            for (int i = 1; i * i <= j; ++i) {
                v[j] = min(v[j], v[j - i * i] + 1);
            }
        }
        return v.back();
    }
};


#endif //LEETCODE_SOLUTION_H
