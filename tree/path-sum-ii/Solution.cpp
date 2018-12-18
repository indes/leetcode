//
// Created by Li on 2018/12/18.
//

#include "Solution.h"

vector<vector<int>> Solution::pathSum(TreeNode *root, int sum) {
    vector<vector<int>> v;

    if (root == nullptr) return v;
    queue<pair<TreeNode *, vector<int>>> q;
    q.push(pair<TreeNode *, vector<int>>{root, vector<int>{root->val}});

    while (!q.empty()) {
        TreeNode *n = q.front().first;
        auto vct = q.front().second;
        q.pop();

        if (n->left != nullptr or n->right != nullptr) {
            if (n->left != nullptr) {
                vector<int> temp(vct);
                temp.push_back(n->left->val);
                q.push(pair<TreeNode *, vector<int>>{n->left, temp});
            }
            if (n->right != nullptr) {
                vector<int> temp(vct);
                temp.push_back(n->right->val);
                q.push(pair<TreeNode *, vector<int>>{n->right, temp});
            }
        } else {
            int vtc_sum = 0;
            for (auto num:vct) {
                vtc_sum += num;
            }
            if (vtc_sum == sum) {
                v.push_back(vct);
            }
        }

    }
    return v;
}
