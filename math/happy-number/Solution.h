//
// Created by Li on 2019/3/13.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        if (n <= 0) return false;
        std::set<int> iset;
        while (n != 1) {
            if (iset.find(n) != iset.end()) {
                return false;
            } else {
                iset.insert(n);
            }
            n = f(n);
        }
        return true;
    }

private:
    int f(int n) {
        int out = 0;
        while (n > 0) {
            out += pow((n % 10), 2);
            n /= 10;
        }
        return out;
    }
};

#endif //LEETCODE_SOLUTION_H
