//
// Created by Li on 2019/4/29.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    int integerReplacement(long long n) {
        long long res = 0;
        if (n == 0) return 1;
        if (n == 1) return 0;
        if (n % 2 == 0) {
            res = integerReplacement(n / 2);
        } else {
            res = min(integerReplacement(n - 1), integerReplacement(n + 1));
        }
        return res + 1;
    }
};


#endif //LEETCODE_SOLUTION_H
