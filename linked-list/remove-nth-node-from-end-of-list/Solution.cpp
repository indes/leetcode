//
// Created by Li on 2018/11/17.
//

#include "Solution.h"

ListNode *Solution::removeNthFromEnd(ListNode *head, int n) {
    ListNode *end = head, *front = head;
    for (int i = 0; i < n; ++i) {
        end = end->next;
    }

    if(end== nullptr) return front->next;
    while (end->next != nullptr) {
        front = front->next;
        end = end->next;
    }

    front->next = front->next->next;

    return head;

}
