//
// Created by Li on 2018/11/17.
//

#include "Solution.h"

void Solution::deleteNode(ListNode *node) {
    node->val = node->next->val;
    node->next = node->next->next;
}
