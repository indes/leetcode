//
// Created by Li on 2018/12/22.
//

#include "Solution.h"

double Solution::myPow(double x, int n) {
    if (n == 0) return 1;
    if (x == 0) return 0;
    if (x == 1) return 1;
    double result = 1;
    if (n < 0) {

        return 1 / power(x, -n);
    } else {
        for (int i = 0; i < n; ++i) {
            result *= x;
        }
        return power(x, n);
    }

}

double Solution::power(double x, int n) {
    if (n == 0) return 1;
    double half = power(x, n / 2);
    if (n % 2 == 0) return half * half;
    return x * half * half;

}
