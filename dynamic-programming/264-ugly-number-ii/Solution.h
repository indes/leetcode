//
// Created by Li on 5/29/2019.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <algorithm>

using namespace std;

class Solution {
public:
    int nthUglyNumber(int n) {
        int *list = new int[n];
        list[0] = 1;
        int next = 1;
        int *i2 = list;
        int *i3 = list;
        int *i5 = list;
        while (next < n) {
            list[next] = min(min(*i2 * 2, *i3 * 3), *i5 * 5);

            while (*i2 * 2 <= list[next]) {
                i2++;
            }
            while (*i3 * 3 <= list[next]) {
                i3++;
            }
            while (*i5 * 5 <= list[next]) {
                i5++;
            }
            next++;
        }
        return list[n - 1];
    }
};


#endif //LEETCODE_SOLUTION_H
