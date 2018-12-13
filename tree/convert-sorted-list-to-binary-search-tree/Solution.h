//
// Created by Li on 2018/12/13.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../TreeNode.h"
#include "../../linked-list/ListNode.h"

class Solution {
public:
    TreeNode *sortedListToBST(ListNode *head);

private:
    TreeNode *getTree(ListNode *head, ListNode *tail);
};


#endif //LEETCODE_SOLUTION_H
