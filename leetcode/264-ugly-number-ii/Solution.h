//
// Created by Li on 5/29/2019.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> list(n, 0);
        list[0] = 1;
        int next = 1;
        auto i2 = list.begin();
        auto i3 = list.begin();
        auto i5 = list.begin();
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
        return list.back();
    }
};


#endif //LEETCODE_SOLUTION_H
