
#include "linked-list/61-rotate-list/Solution.h"

using namespace std;

int main() {
    Solution s;
//    auto ans = s.isValid("{}{}(])");
    ListNode n1(1), n2(2, &n1), n3(3, &n2), n4(4, &n3);
    auto r = s.rotateRight(&n4, 9);
    return 0;
}


