
#include "tree/convert-sorted-array-to-binary-search-tree/Solution.h"

using namespace std;

int main() {
    Solution s;
//    ListNode n1{1, nullptr}, n2{2, &n1}, n3{3, &n2}, n4{4, &n3};
    vector<int> v{-10, -3, 0, 5, 9};

//
//    TreeLinkNode n1 = {1, &n2, &n3, nullptr};
//    TreeLinkNode n2 = {2, nullptr, nullptr, nullptr};
//    TreeLinkNode n3 = {3, &n1, &n2, nullptr};
//


    auto k = s.sortedArrayToBST(v);
    return 0;

}


