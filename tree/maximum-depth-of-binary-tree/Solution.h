//
// Created by Li on 2018/11/26.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../TreeNode.h"
#include <queue>
#include <limits>
#include <algorithm>
class Solution {
public:
    int num;
    int maxDepth(TreeNode *root);
    void travel(TreeNode * node,int level);
};


#endif //LEETCODE_SOLUTION_H
