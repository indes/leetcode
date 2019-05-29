//
// Created by Li on 5/29/2019.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H


class Solution {
public:
    bool isUgly(int num) {
        if (num == 0) {
            return false;
        }
        if (num == 1) {
            return true;
        }

        while (num % 2 == 0) {
            num /= 2;
        }
        while (num % 3 == 0) {
            num /= 3;
        }
        while (num % 5 == 0) {
            num /= 5;
        }

        return num == 1;
    }
};

#endif //LEETCODE_SOLUTION_H
