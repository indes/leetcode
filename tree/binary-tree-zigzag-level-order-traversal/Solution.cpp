//
// Created by Li on 2018/12/7.
//

#include "Solution.h"

vector<vector<int>> Solution::zigzagLevelOrder(TreeNode *root) {
    if (root == nullptr) return vector<vector<int>>();
    vector<vector<int>> v{vector<int>()};
    queue<pair<TreeNode *, int>> q;
    int first;
    int status = 0;
    q.push(pair<TreeNode *, int>(root, 0));

    while (!q.empty()) {
        auto node = q.front();
        q.pop();
        if (node.second != status) {
            status = node.second;
            v.push_back(vector<int>());
        }
        if (status % 2 == 0)
            v.back().push_back(node.first->val);

        } else {
            v.back().insert(v.back().begin(), node.first->val);
        }

        if (node.first->left != nullptr) q.push(pair<TreeNode *, int>(node.first->left, node.second + 1));
        if (node.first->right != nullptr) q.push(pair<TreeNode *, int>(node.first->right, node.second + 1));

    }

    return v;
}
