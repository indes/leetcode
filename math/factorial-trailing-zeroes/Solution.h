//
// Created by Li on 2019/3/18.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H


class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        while (n / 5 != 0) {
            count += n / 5;
            n /= 5;
        }
        return count;
    }
};


#endif //LEETCODE_SOLUTION_H
