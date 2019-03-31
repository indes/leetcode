
#include "linked-list/206-reverse-linked-list/Solution.h"


using namespace std;

int main() {
    Solution s;
    ListNode n3(3), n2(2, &n3), n1(1, &n2);

    auto r = s.reverseList(&n1);
    return 0;
}


