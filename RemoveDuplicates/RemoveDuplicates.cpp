//
// Created by Li on 2018/9/18.
//

#include "RemoveDuplicates.h"


int RemoveDuplicates::removeDuplicates(vector<int> &nums) {
//    int count = 0;
    if (nums.size() < 2)
        return nums.size();


    for (vector<int>::iterator iter1 = nums.begin(), iter2 = iter1 + 1;
         iter2 != nums.end();) {

        if (*iter1 == *iter2) {
            nums.erase(iter2);

        } else {
            ++iter1, ++iter2;
        };

    }

    return nums.size();
};