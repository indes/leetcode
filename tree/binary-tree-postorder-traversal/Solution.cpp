//
// Created by Li on 2018/12/10.
//

#include "Solution.h"

vector<int> Solution::postorderTraversal(TreeNode *root) {
    if (root == nullptr) return vector<int>();

    stack<TreeNode *> s;
    vector<int> v;
    s.push(root);
    while (!s.empty()) {
        TreeNode *n = s.top();
        if (n->left or n->right) {
            if (n->right) {
                s.push(n->right);
                n->right = nullptr;

            }
            if (n->left) {
                s.push(n->left);
                n->left = nullptr;
            }
        } else {
            s.pop();
            v.push_back(n->val);
        }
    }
    return v;
}
