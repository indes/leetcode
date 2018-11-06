//
// Created by Li on 2018/11/3.
//

#include "RemoveDuplicates2.h"

int RemoveDuplicates2::removeDuplicates(vector<int> &nums) {
    if (nums.empty()) return 0;

    int count = 0;
    vector<int>::iterator iter2 = nums.begin();
    for (vector<int>::iterator i = nums.begin() + 1; i != nums.end(); ++i) {
        if (*i != *iter2) {
            iter2++;
            count = 0;
        } else {
            count++;
            if (count < 2) {

            }
        }
    }
    return 0;
}
