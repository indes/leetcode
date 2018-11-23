//
// Created by Li on 2018/11/23.
//

#include "Solution.h"

ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2) {
    if (!l1) return l2;
    if (!l2) return l1;

    ListNode front({0, nullptr});
    ListNode *p = &front;
    int up = 0, sum = 0;
    while (l1 and l2) {
        sum = l1->val + l2->val + up;

        if (sum >= 10) {
            up = 1;
            sum %= 10;
        } else {
            up = 0;
        }

//        ListNode n{sum, nullptr};
        p->next = new ListNode({sum, nullptr});
        l1 = l1->next;
        l2 = l2->next;
        p = p->next;
    }

    if (l2) {
        p->next = l2;
    } else {
        p->next = l1;
    }

    while (up) {
        if (p->next) {
            int val = p->next->val;
            p->next->val = (val + 1) % 10;

            up = (val + 1) / 10;
            p = p->next;
        } else {
            p->next = new ListNode({1, nullptr});
            up = 0;
        }
    }
    return front.next;
}
