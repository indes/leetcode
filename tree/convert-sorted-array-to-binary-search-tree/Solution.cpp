//
// Created by Li on 2018/12/13.
//

#include "Solution.h"

TreeNode *Solution::sortedArrayToBST(vector<int> &nums) {
    if (nums.empty()) return nullptr;


    return getTree(nums, 0, nums.size());
}

TreeNode *Solution::getTree(vector<int> &nums, vector<int>::size_type start, vector<int>::size_type end) {

    if (start == end) return nullptr;
    vector<int>::size_type mid = start + (end - start) / 2;

    TreeNode *n = new TreeNode({nums[mid], nullptr, nullptr});
    n->left = getTree(nums, start, mid);
    n->right = getTree(nums, mid + 1, end);

    return n;
}
