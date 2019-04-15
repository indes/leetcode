//
// Created by Li on 2019/3/6.
//

#include "MajorityElement.h"

int Solution::majorityElement(vector<int> &nums) {

    int count = 0, temp_int = 0;
    for (auto num:nums) {
        if (num == temp_int) {
            count++;
        } else {
            count--;
            if (count <= 0) {
                temp_int = num;
                count = 1;
            }
        }

    }

    return temp_int;
}
