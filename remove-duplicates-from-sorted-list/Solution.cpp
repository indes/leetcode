//
// Created by Li on 2018/11/18.
//

#include "Solution.h"

ListNode *Solution::deleteDuplicates(ListNode *head) {
    ListNode *p1 = head;
    while (p1 != nullptr and p1->next != nullptr) {

        while (p1->next != nullptr and p1->val == p1->next->val ) {
            p1->next = p1->next->next;
        }
        p1 = p1->next;
    }

    return head;
}
