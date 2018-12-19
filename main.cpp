
#include "tree/flatten-binary-tree-to-linked-list/Solution.h"

using namespace std;

int main() {
    Solution s;
//    ListNode n1{1, nullptr}, n2{2, &n1}, n3{3, &n2}, n4{4, &n3};
//    vector<int> v{-10, -3, 0, 5, 9};

    TreeNode n1{5, nullptr, nullptr}, n2{1, &n1, nullptr}, n3{7, nullptr, &n2};

//    TreeNode n4{2, nullptr, nullptr}, n5{13, nullptr, nullptr}, n6{4, &n1, &n2};
//
//    TreeNode n7{11, &n3, &n4}, n8{4, &n7, nullptr}, n9{8, &n5, &n6};
//    TreeNode n10{5, &n8, &n9};

//    TreeLinkNode n1 = {1, &n2, &n3, nullptr};
//    TreeLinkNode n2 = {2, nullptr, nullptr, nullptr};
//    TreeLinkNode n3 = {3, &n1, &n2, nullptr};
//


    s.flatten(&n3);
    return 0;

}


