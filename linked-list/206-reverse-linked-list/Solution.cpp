//
// Created by Li on 2018/11/20.
//

#include "Solution.h"

ListNode *Solution::reverseList(ListNode *head) {

    ListNode *prev = nullptr;
    ListNode *curr = head;
    while (curr) {
        ListNode *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
