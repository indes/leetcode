//
// Created by Li on 2018/12/3.
//

#include "Solution.h"

int Solution::jump(vector<int> &nums) {
    if (nums.empty()) return 0;
    int size = nums.size(), remain = nums[0], next = 0, count;

    int place = 0;
    while (place < nums.size()) {
        remain--;
        place++;
        if (place >= nums.size() - 1) break;

        while (remain <= place) {
            next = max(next, nums[place] + place);
            place++;
        }
        count++;

    }
    return count;
}
