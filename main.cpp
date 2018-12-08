
#include "tree/symmetric-tree/Solution.h"

using namespace std;

int main() {
    Solution s;
//    ListNode n1 = {1, nullptr}, n2 = {6, &n1}, n3 = {5, &n2}, n4{9, nullptr}, n5{9, &n4}, n6{2, &n5}, n7{1, &n6};
//    vector<string> v{"ale", "apple", "monkey", "plea"};


    TreeNode n1 = {3, nullptr, nullptr};
    TreeNode n2 = {3, nullptr, nullptr};
    TreeNode n3 = {2, nullptr, &n2};
    TreeNode n4 = {2, nullptr, &n1};
    TreeNode n5 = {1, &n3, &n4};


    auto res = s.isSymmetric(&n5);
    return 0;

}


