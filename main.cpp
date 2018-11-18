
//#include "remove-nth-node-from-end-of-list/Solution.h"
#include "remove-duplicates-from-sorted-list/Solution.h"
//using namespace std;

int main() {
    Solution s;
    ListNode n1 = {3, nullptr}, n2 = {3, &n1}, n3 = {2, &n2}, n4{1, &n3}, n5{1, &n4};


//    auto res = s.removeNthFromEnd(&n5, 2);
    auto res = s.deleteDuplicates(&n5);
    return 0;

}


