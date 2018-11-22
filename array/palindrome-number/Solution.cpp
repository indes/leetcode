//
// Created by Li on 2018/11/15.
//

#include "Solution.h"

bool Solution::isPalindrome(int x) {
    if (x < 0) return false;
    if (x == 0) return true;

    int temp = x, y = 0;
    while (x != 0) {
        y = y * 10 + x % 10;
        x /= 10;
    }
    return temp == y;

}
