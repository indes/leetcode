//
// Created by Li on 2018/12/9.
//

#include "Solution.h"

bool Solution::hasPathSum(TreeNode *root, int sum) {
    if (root == nullptr) return false;
    stack<pair<TreeNode *, int>> s;
    s.push(pair<TreeNode *, int>(root, 0));

    while (!s.empty()) {
        TreeNode *n = s.top().first;
        int last_sum = s.top().second;
        s.pop();
        if (n->left == nullptr and n->right == nullptr) {
            if ((n->val + last_sum) == sum) {
                return true;
            }
        } else {
            if (n->left != nullptr) s.push(pair<TreeNode *, int>(n->left, last_sum + n->val));
            if (n->right != nullptr) s.push(pair<TreeNode *, int>(n->right, last_sum + n->val));
        }
    }

    return false;
}
