//
// Created by Li on 2019/3/25.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../ListNode.h"

class Solution {
public:
    ListNode *rotateRight(ListNode *head, int k) {
        if (!head or !head->next or k == 0)
            return head;

        ListNode dummy(-1);
        dummy.next = head;
        ListNode *f_p = head, *s_p = head;
        int length = 1;
        for (int i = 0; i < k; ++i) {
            if (f_p->next) {
                f_p = f_p->next;
                ++length;
            } else {
                int steps = k % length;
                f_p = head;
                for (int j = 0; j < steps; ++j) {
                    f_p = f_p->next;
                }
                break;
            }
        }
        while (f_p->next) {
            f_p = f_p->next;
            s_p = s_p->next;
        }

        f_p->next = dummy.next;
        dummy.next = s_p->next;
        s_p->next = nullptr;
        return dummy.next;
    }
};

#endif //LEETCODE_SOLUTION_H
