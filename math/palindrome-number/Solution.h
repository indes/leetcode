//
// Created by Li on 2018/11/22.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H


class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x == 0) return true;

        int temp = x, y = 0;
        while (x != 0) {
            y = y * 10 + x % 10;
            x /= 10;
        }
        return temp == y;
    }
};


#endif //LEETCODE_SOLUTION_H
