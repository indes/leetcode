//
// Created by Li on 2018/11/19.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../ListNode.h"
#include <vector>

using namespace std;

class Solution {
public:
    ListNode *mergeKLists(vector<ListNode *> &lists);

private:
    ListNode* merge2Lists(ListNode* l1, ListNode* l2);
};


#endif //LEETCODE_SOLUTION_H
