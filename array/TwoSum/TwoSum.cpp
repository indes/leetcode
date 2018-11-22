//
// Created by Li on 2018/9/18.
//

#include "TwoSum.h"

vector<int> TwoSum::twoSum(vector<int> &nums, int target) {
    vector<int> rtn;
    unordered_map<int, int> map;
    for (vector<int>::iterator iter = nums.begin(); iter != nums.end(); ++iter) {
        map[*iter] = iter - nums.begin();
    }
    for (vector<int>::iterator iter = nums.begin(); iter != nums.end(); ++iter) {
        int rest_val = target - *iter;
        if (map.find(rest_val) != map.end()) {
            int index = map[rest_val];
            if (index == iter - nums.begin()) continue;
            if (index < iter - nums.begin()) {
                rtn.push_back(index);
                rtn.push_back(iter - nums.begin());
                return rtn;
            } else {
                rtn.push_back(iter - nums.begin());
                rtn.push_back(index);
                return rtn;
            }
        }
    }


}
