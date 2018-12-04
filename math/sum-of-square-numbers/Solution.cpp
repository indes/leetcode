//
// Created by Li on 2018/12/4.
//

#include "Solution.h"

bool Solution::judgeSquareSum(int c) {
    int a = 0, b = (int) sqrt(c);
    int sum;
    while (a <= b) {
        sum = pow(a, 2) + pow(b, 2);
        if (sum == c) {
            return true;
        } else if (sum < c) {
            a++;
        } else {
            b--;
        }
    }
    return false;
}
