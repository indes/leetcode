//
// Created by Li on 2018/9/21.
//

#ifndef LEETCODE_PLUSONE_H
#define LEETCODE_PLUSONE_H

#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

class PlusOne {
public:
    vector<int> plusOne(vector<int> &digits) {
        for (int i = digits.size() - 1; i >= 0; --i) {

            if (digits[i] == 9) {
                digits[i] = 0;
                if (i == 0) {
                    digits.insert(digits.begin(), 1);
                    return digits;
                }
            } else {
                digits[i]++;
                return digits;
            }
        }
    }
};


#endif //LEETCODE_PLUSONE_H
