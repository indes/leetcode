//
// Created by Li on 2018/9/18.
//

#include "TwoSum.h"

vector<int> TwoSum::twoSum(vector<int> &nums, int target) {
    vector<int> rtn;
    for (vector<int>::iterator iter = nums.begin(); iter != nums.end(); ++iter) {
        for (auto i = iter + 1; i != nums.end(); ++i) {
            if (*i == target - *iter) {
                rtn.push_back(iter - nums.begin());
                rtn.push_back(i - nums.begin());
                return rtn;
            }
        }
    }
}
