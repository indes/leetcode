
//#include "remove-nth-node-from-end-of-list/Solution.h"
#include "linked-list-cycle/Solution.h"
//using namespace std;

int main() {
    Solution s;
    ListNode n1 = {1, nullptr}, n2 = {2, &n1}, n3 = {3, &n2}, n4{4, &n3}, n5{5, &n4};


//    auto res = s.removeNthFromEnd(&n5, 2);
    auto res = s.hasCycle(nullptr);
    return 0;

}


