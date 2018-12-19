//
// Created by Li on 2018/12/19.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../TreeNode.h"
#include <climits>

#include <limits>

class Solution {
public:
    bool isValidBST(TreeNode *root);

private:
    bool compare(TreeNode *, long long , long long);
};


#endif //LEETCODE_SOLUTION_H
