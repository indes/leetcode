
#include "linked-list/148-sort-list/Solution.h"

using namespace std;

int main() {
    Solution s;
//    vector<int> v = {4, 5, 6, 7, 0, 1, 2};
    ListNode n1{3, nullptr}, n2{1, &n1}, n3{2, &n2}, n4{4, &n3}, n5{5, &n4};

    auto res = s.sortList(&n5);

    return 0;
}


