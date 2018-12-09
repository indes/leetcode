//
// Created by Li on 2018/12/9.
//

#include "Solution.h"

bool Solution::isBalanced(TreeNode *root) {
    if (root == nullptr) return true;

    int left = getHeight(root->left), right = getHeight(root->right);
    if (abs(left - right) <= 1) {
        return isBalanced(root->left) and isBalanced(root->right);
    } else {
        return false;
    }

}

int Solution::getHeight(TreeNode *root) {
    if (root == nullptr)
        return 0;
    std::queue<std::pair<TreeNode *, int>> q;
    int height = INT_MIN;
    q.push(pair<TreeNode *, int>(root, 1));
    while (!q.empty()) {
        TreeNode *n = q.front().first;
        int nowHeight = q.front().second;
        height = max(height, nowHeight);
        q.pop();

        if (n->left != nullptr) q.push(pair<TreeNode *, int>(n->left, nowHeight + 1));
        if (n->right != nullptr) q.push(pair<TreeNode *, int>(n->right, nowHeight + 1));
    }

    return height;
}
