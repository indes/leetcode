//
// Created by Li on 2018/12/20.
//

#include "Solution.h"

int Solution::hammingWeight(uint32_t n) {
    int count = 0;
    while (n) {
        if(n & 1){
            count++;
        }
        n = n >> 1;
    }

    return count;
}
