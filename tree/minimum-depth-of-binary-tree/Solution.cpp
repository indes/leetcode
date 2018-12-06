//
// Created by Li on 2018/12/6.
//


#include "Solution.h"

int Solution::minDepth(TreeNode *root) {
    if (root == nullptr) return 0;

    n = INT_MAX;
    int d = 1;
    depth(root, d);
    return n;
}

void Solution::depth(TreeNode *node, int &d) {
    if (!node->left and !node->right) n = std::min(n, d);

    if (node->left) {
        d++;
        depth(node->left, d);
        d--;
    }

    if (node->right) {
        d++;
        depth(node->right, d);
        d--;
    }
}
