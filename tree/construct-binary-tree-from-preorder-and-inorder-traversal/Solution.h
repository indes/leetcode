//
// Created by Li on 2019/3/9.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <algorithm>

#include "../TreeNode.h"
#include <vector>
#include <map>
#include <unordered_map>

using std::vector;
using std::unordered_map;

class Solution {
public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder);

private:
    unordered_map<int, int> m;

    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder, int pb, int pe, int ib, int ie);
};


#endif //LEETCODE_SOLUTION_H
