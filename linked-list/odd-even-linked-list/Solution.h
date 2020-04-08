//
// Created by Li on 2019/3/9.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H


#include "../ListNode.h"

//using namespace std;

class Solution {
public:
    ListNode *oddEvenListOld(ListNode *head);

    ListNode *oddEvenList(ListNode *head);

private:
    void swapNodes(ListNode *node1, ListNode *node2);

    void insertNextNodes(ListNode *n1, ListNode *n2);
};

#endif //LEETCODE_SOLUTION_H
