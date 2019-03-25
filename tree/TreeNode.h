//
// Created by Li on 2018/11/26.
//

#ifndef LEETCODE_TREENODE_H
#define LEETCODE_TREENODE_H


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int val, TreeNode *left, TreeNode *right) : val(val), left(left), right(right) {}
};

#endif //LEETCODE_TREENODE_H
