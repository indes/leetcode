//
// Created by Li on 2018/12/6.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../TreeNode.h"
#include <climits>
#include <algorithm>
class Solution {

public:
    int n;

    int minDepth(TreeNode *root);
private:
    void depth(TreeNode *node, int&d);
};


#endif //LEETCODE_SOLUTION_H
