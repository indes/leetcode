//
// Created by Li on 2018/11/3.
//

#include "RemoveElement.h"

int RemoveElement::removeElement(vector<int> &nums, int val) {
    auto iter2 = nums.begin();
    for (vector<int>::iterator iter1 = nums.begin(); iter1 != nums.end(); ++iter1) {
        if (*iter1 == val) continue;
        nums[iter2 - nums.begin()] = *iter1;
        ++iter2;
    }
    return iter2 - nums.begin();
}
