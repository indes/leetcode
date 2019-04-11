//
// Created by Li on 2019/4/11.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
#include <climits>

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while (x) {
            int temp = x % 10;
            x /= 10;
            if (ans > INT_MAX / 10 || (ans == INT_MAX && temp > 7))
                return 0;
            if (ans < INT_MIN / 10 || (ans == INT_MIN && temp < -8))
                return 0;
            ans = ans * 10 + temp;
        }
        return ans;
    }
};

#endif //LEETCODE_SOLUTION_H
