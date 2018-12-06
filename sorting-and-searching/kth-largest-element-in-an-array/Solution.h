//
// Created by Li on 2018/12/5.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k);

private:
    void sort(vector<int> &nums);
};


#endif //LEETCODE_SOLUTION_H
