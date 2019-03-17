//
// Created by Li on 2019/3/17.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int front = 0, tail = nums.size() - 1;
        vector<int> ans = {-1, -1};
        while (front <= tail) {
            int mid = front + (tail - front) / 2;
            if (nums[mid] == target) {
                int s = mid, e = mid;
                while (s >= 0 and nums[s] == target) {
                    s--;
                }

                while (e<=nums.size()-1 and nums[e] == target) {
                    e++;
                }
                ans = {++s, --e};
                return ans;
            } else if (nums[mid] > target) {
                tail = mid - 1;
            } else {
                front = mid + 1;
            }
        }
        return ans;
    }
};


#endif //LEETCODE_SOLUTION_H
