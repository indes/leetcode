//
// Created by Li on 2019/4/1.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int> &bills) {
        int count_10 = 0, count_5 = 0;
        for (auto b:bills) {
            if (b == 5) count_5++;
            if (b == 10) count_10++, count_5--;
            if (b == 20) {
                if (count_10 > 0) count_10--, count_5--;
                else count_5 -= 3;
            }
            if (count_5 < 0 or count_10 < 0)return false;
        }
        return true;
    }
};


#endif //LEETCODE_SOLUTION_H
