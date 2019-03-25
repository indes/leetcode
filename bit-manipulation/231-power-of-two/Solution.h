//
// Created by Li on 2019/3/25.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H


class Solution {
public:
    bool isPowerOfTwo2(int n) {
        if (n <= 0)
            return false;
        unsigned long long x = 1;
        while (x < n) {
            x = x << 1;
        }
        return x == n;
    }

    bool isPowerOfTwo(int n) {
        return (n > 0) && !(n & (n - 1));
    }
};


#endif //LEETCODE_SOLUTION_H
