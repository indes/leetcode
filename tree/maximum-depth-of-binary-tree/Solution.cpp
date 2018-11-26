//
// Created by Li on 2018/11/26.
//

#include "Solution.h"

int Solution::maxDepth(TreeNode *root) {
    if (root == nullptr) return 0;
    num = std::numeric_limits<int>::min();

    travel(root, 1);
    return num;
}

void Solution::travel(TreeNode *node, int level) {
    if (!node->left && !node->right) {
        num = std::max(num, level);
        return;
    }

    if (node->left) {
        travel(node->left, level + 1);
    }
    if (node->right) {
        travel(node->right, level + 1);
    }

}
