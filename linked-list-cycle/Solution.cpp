//
// Created by Li on 2018/11/17.
//

#include "Solution.h"

bool Solution::hasCycle(ListNode *head) {
    if(head == nullptr) return false;
    ListNode *p2 = head;

    while (p2->next != nullptr) {
        p2 = p2->next;
        if(p2 == head) return true;
    }
    return false;
}
