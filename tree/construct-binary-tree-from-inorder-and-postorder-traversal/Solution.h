//
// Created by Li on 2019/3/16.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../TreeNode.h"
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    TreeNode *buildTree2(vector<int> &inorder, vector<int> &postorder) {
        if (inorder.empty()) return nullptr;

        for (int i = 0; i < inorder.size(); ++i) {
            m[inorder[i]] = i;
        }
        return buildTree2(inorder, postorder, 0, inorder.size() - 1, 0, postorder.size() - 1);
    }

private:
    unordered_map<int, int> m;

    TreeNode *buildTree2(vector<int> &inorder, vector<int> &postorder, int ib, int ie, int pb, int pe) {
        if (ib > ie and pb > pe) {
            return nullptr;
        }
        TreeNode *node = new TreeNode;
        node->val = postorder[pe];
        int mid = m[postorder[pe]];
        int num = ie - mid;

        node->left = buildTree2(inorder, postorder, ib, mid - 1, pb, pe - 1 - num);
        node->right = buildTree2(inorder, postorder, mid + 1, ie, mid, pe - 1);

        return node;
    }
};


#endif //LEETCODE_SOLUTION_H
