
#include "tree/validate-binary-search-tree/Solution.h"

using namespace std;

int main() {
    Solution s;
//    ListNode n1{1, nullptr}, n2{2, &n1}, n3{3, &n2}, n4{4, &n3};
//    vector<int> v{-10, -3, 0, 5, 9};

    TreeNode n1{6, nullptr, nullptr}, n2{20, nullptr, nullptr}, n3{15, &n1, &n2};

    TreeNode n4{5, nullptr, nullptr}, n5{10, &n4, &n3}, n6{4, &n1, &n2};
//
//    TreeNode n7{11, &n3, &n4}, n8{4, &n7, nullptr}, n9{8, &n5, &n6};
    TreeNode n10{2147483647, nullptr, nullptr};

//    TreeLinkNode n1 = {1, &n2, &n3, nullptr};
//    TreeLinkNode n2 = {2, nullptr, nullptr, nullptr};
//    TreeLinkNode n3 = {3, &n1, &n2, nullptr};
//


    auto k = s.isValidBST(&n10);
    return 0;

}


