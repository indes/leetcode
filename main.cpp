
#include "linked-list/143-reorder-list/Solution.h"


using namespace std;

int main() {
    Solution s;
    ListNode n5(5), n4(4), n3(3, &n4), n2(2, &n3), n1(1, &n2);
    s.reorderList(&n1);
    return 0;
}


