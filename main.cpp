
#include "tree/binary-tree-level-order-traversal/Solution.h"

using namespace std;

int main() {
    Solution s;
//    ListNode n1 = {1, nullptr}, n2 = {6, &n1}, n3 = {5, &n2}, n4{9, nullptr}, n5{9, &n4}, n6{2, &n5}, n7{1, &n6};
//    vector<string> v{"ale", "apple", "monkey", "plea"};


    TreeNode n1 = {1, nullptr, nullptr};
    TreeNode n2 = {2, nullptr, nullptr};
    TreeNode n3 = {3, &n1, &n2};
    auto res = s.levelOrder(&n3);
    return 0;

}


