//
// Created by Li on 2018/12/19.
//

#include "Solution.h"

bool Solution::isValidBST(TreeNode *root) {
    return compare(root, LONG_LONG_MAX, LONG_LONG_MIN);
}

bool Solution::compare(TreeNode *root, long long max_int, long long min_int) {

    if (root == nullptr) return true;
    if (root->val > min_int and root->val < max_int) {
        return compare(root->left, root->val, min_int) and compare(root->right, max_int, root->val);

    } else {
        return false;
    }

}


