//
// Created by Li on 2019/5/26.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H


class Solution {
public:
    int mySqrt(int x) {
        int min = 0;
        int max = (x / 2) + 1;
        while (min <= max) {
            long long mid = (min + max) / 2;
            long long res = mid * mid;
            if (res == x) return mid;
            if (res < x) {
                min = mid + 1;
            } else {
                max = mid - 1;
            }
        }
        return max;
    }
};


#endif //LEETCODE_SOLUTION_H
