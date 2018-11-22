//
// Created by Li on 2018/11/22.
//

#include "Solution.h"

ListNode *Solution::swapPairs(ListNode *head) {
    if (head == nullptr) return head;

    ListNode front{0, head};

    ListNode *p1 = &front, *p2 = p1->next, *p3 = nullptr;
    int count = 0;
    while (p2 != nullptr) {
        count++;
        if (count == 2) {
            p3 = p1->next;

            p3->next = p2->next;
            p1->next = p2;
            p2->next = p3;
            //交换完毕

            p1 = p3;
            p2 = p1->next;
            count = 0;
        } else {
            p2 = p2->next;
        }

    }

    return front.next;
}
