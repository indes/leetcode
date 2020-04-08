//
// Created by Li on 2018/12/7.
//

#include "Solution.h"

vector<vector<int>> Solution::levelOrder(TreeNode *root) {
    if (root == nullptr) return vector<vector<int>>();
    vector<vector<int>> v{vector<int>()};
    queue<pair<TreeNode *, int>> q;
    int status = 0;
    q.push(pair<TreeNode *, int>(root, 0));

    while (!q.empty()) {
        auto node = q.front();
        q.pop();
        if (node.second != status) {
            status = node.second;
            v.push_back(vector<int>());
        }
        v.back().push_back(node.first->val);
        if (node.first->left != nullptr) q.push(pair<TreeNode *, int>(node.first->left, node.second + 1));
        if (node.first->right != nullptr) q.push(pair<TreeNode *, int>(node.first->right, node.second + 1));
    }

    return v;

}


vector<vector<int>> Solution::levelOrder2(TreeNode *root) {
    vector<vector<int>> v;
    if (root == nullptr) return vector<vector<int>>();
    deque<TreeNode *> dq;
    dq.push_back(root);

    while (!dq.empty()) {
        auto currentLength = dq.size();

        v.emplace_back();

        for (int i = 0; i < currentLength; ++i) {

            TreeNode *n = dq.front();
            dq.pop_front();
            v.back().push_back(n->val);
            if (n->left) dq.push_back(n->left);
            if (n->right) dq.push_back(n->right);
        }
    }
    return v;
}
