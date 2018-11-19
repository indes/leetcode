
//#include "remove-nth-node-from-end-of-list/Solution.h"
#include "remove-duplicates-from-sorted-list-ii/Solution2.h"
//using namespace std;

int main() {
    Solution2 s;
    ListNode n1 = {5, nullptr}, n2 = {4, &n1}, n3 = {4, &n2}, n4{3, &n3}, n5{3, &n4}, n6{1, nullptr}, n7{1, &n6};


//    auto res = s.removeNthFromEnd(&n5, 2);
    auto res = s.deleteDuplicates(&n7);
    return 0;

}


