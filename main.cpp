
//#include "remove-nth-node-from-end-of-list/Solution.h"
#include "reverse-linked-list-ii/Solution.h"
//using namespace std;

int main() {
    Solution s;
    ListNode n1 = {7, nullptr}, n2 = {6, &n1}, n3 = {5, &n2}, n4{4, &n3}, n5{3, &n4}, n6{2, &n5}, n7{1, &n6};


//    auto res = s.removeNthFromEnd(&n5, 2);
    auto res = s.reverseBetween(&n7, 1, 5);
    return 0;

}


