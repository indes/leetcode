//
// Created by Li on 2018/11/27.
//

#include "Solution.h"


int Solution::firstBadVersion(int n) {
    long min = 1;
    long max = n;
    if (min == max) return min;
    long mid = (min + max) >> 1;

    while (max > min) {
        if (isBadVersion(mid)) max = mid ;
        else min = mid + 1;
        mid = (min + max) >> 1;
    }

    return min;
}

bool isBadVersion(int version) {
    return false;
}
