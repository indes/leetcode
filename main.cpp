
//#include "remove-nth-node-from-end-of-list/Solution.h"
#include "merge-two-sorted-lists/Solution.h"
//using namespace std;

int main() {
    Solution s;
    ListNode n1 = {5, nullptr}, n2 = {2, &n1}, n3 = {1, &n2}, n4{4, nullptr}, n5{3, &n4}, n6{1, &n5}, n7{1, &n6};


//    auto res = s.removeNthFromEnd(&n5, 2);
    auto res = s.mergeTwoLists(&n7, &n3);
    return 0;

}


