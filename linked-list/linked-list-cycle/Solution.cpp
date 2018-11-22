//
// Created by Li on 2018/11/17.
//

#include "Solution.h"

bool Solution::hasCycle(ListNode *head) {

    if (head == nullptr or head->next == nullptr) return false;
    ListNode *p1 = head, *p2 = head;

    while (p1->next != nullptr and p1->next->next != nullptr) {
        p1 = p1->next->next;
        p2 = p2->next;
        if (p2 == p1) return true;
    }
    return false;
}
