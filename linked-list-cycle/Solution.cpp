//
// Created by Li on 2018/11/17.
//

#include "Solution.h"

bool Solution::hasCycle(ListNode *head) {

    if (head == NULL or head->next == NULL) return false;
    ListNode *p1 = head, *p2 = head;

    while (p1->next != NULL and p1->next->next != NULL) {
        p1 = p1->next->next;
        p2 = p2->next;
        if (p2 == p1) return true;
    }
    return false;
}
