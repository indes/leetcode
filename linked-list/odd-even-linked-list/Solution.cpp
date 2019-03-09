//
// Created by Li on 2019/3/9.
//

#include "Solution.h"

ListNode *Solution::oddEvenList(ListNode *head) {
    if (head == nullptr or head->next == nullptr or head->next->next == nullptr) return head;

    ListNode *odd_node = head;
    ListNode *even_head = head->next;
    ListNode *even_node = even_head;
    ListNode *p = even_node;

    int index = 2;
    while (p->next != nullptr) {
        p = p->next;
        index++;
        if (index % 2 == 1) {
            odd_node->next = p;
            odd_node = odd_node->next;
        } else {
            even_node->next = p;
            even_node = even_node->next;
        }
    }
    odd_node->next = nullptr;
    even_node->next = nullptr;
    odd_node->next = even_head;

    return head;
}

void Solution::swapNodes(ListNode *node1, ListNode *node2) {
    ListNode *p = node1->next->next;
    node1->next->next = node2->next->next;
    node2->next->next = p;
    p = node1->next;
    node1->next = node2->next;
    node2->next = p;
}
