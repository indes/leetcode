
#include "remove-nth-node-from-end-of-list/Solution.h"

//using namespace std;

int main() {
    Solution s;
    ListNode n1 = {2, nullptr}, n2 = {4, &n1}, n3 = {3, &n2}, n4{2, nullptr}, n5{1, &n4};


    auto res = s.removeNthFromEnd(&n5, 2);
    return 0;
}


