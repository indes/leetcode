//
// Created by Li on 2018/9/18.
//

#include "ContainsDuplicate.h"

bool ContainsDuplicate::containsDuplicate(vector<int> &nums) {
    map<int, int> int_count;
    for (vector<int>::iterator iter = nums.begin(); iter != nums.end() ; ++iter) {
        if(int_count[*iter] == 1) return true;
        int_count[*iter] ++;
    }

    return false;
}
