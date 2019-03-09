
#include "linked-list/odd-even-linked-list/Solution.h"

using namespace std;

int main() {
    Solution s;
    ListNode *n5 = new ListNode{5, nullptr};
    ListNode *n4 = new ListNode{4, n5};
    ListNode *n3 = new ListNode{3, n4};
    ListNode *n2 = new ListNode{2, n3};
    ListNode *n1 = new ListNode{1, n2};

    s.oddEvenList(n1);
    return 0;
}


