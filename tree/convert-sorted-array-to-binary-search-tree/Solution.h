//
// Created by Li on 2018/12/13.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../TreeNode.h"
#include <vector>

using namespace std;

class Solution {
public:
    TreeNode *sortedArrayToBST(vector<int> &nums);

private:
    TreeNode *getTree(vector<int> &nums, vector<int>::size_type start, vector<int>::size_type end);
};


#endif //LEETCODE_SOLUTION_H
