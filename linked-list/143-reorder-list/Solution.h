//
// Created by Li on 2019/4/2.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <stack>
#include "../ListNode.h"

using namespace std;

class Solution {
public:
    void reorderList(ListNode *head) {
        if (head == nullptr)
            return;
        ListNode *fast = head, *slow = head;
        while (fast->next and fast->next->next) {
            fast = fast->next->next;
            slow = slow->next;
        }

        stack<ListNode *> stk;
        for (ListNode *p = slow->next; p != nullptr; p = p->next) {
            stk.push(p);
        }
        slow->next = nullptr;

        ListNode *n1 = head;
        while (!stk.empty()) {
            ListNode *n2 = stk.top();
            stk.pop();
            insertNode(n1, n2);
            n1 = n1->next->next;
        }
    }

private:
    void insertNode(ListNode *n1, ListNode *n2) {
        ListNode *temp = n1->next;
        n1->next = n2;
        n2->next = temp;
    }
};

#endif //LEETCODE_SOLUTION_H
