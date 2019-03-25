//
// Created by Li on 2018/11/23.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../ListNode.h"

class Solution {
public:
    ListNode *sortList(ListNode *head);

private:
    ListNode *mergeList(ListNode *, ListNode *);
};


#endif //LEETCODE_SOLUTION_H
