
#include "tree/populating-next-right-pointers-in-each-node/Solution.h"

using namespace std;

int main() {
    Solution s;
//    ListNode n1 = {1, nullptr}, n2 = {6, &n1}, n3 = {5, &n2}, n4{9, nullptr}, n5{9, &n4}, n6{2, &n5}, n7{1, &n6};
//    vector<string> v{"ale", "apple", "monkey", "plea"};


    TreeLinkNode n1 = {1, nullptr, nullptr, nullptr};
    TreeLinkNode n2 = {2, nullptr, nullptr, nullptr};
    TreeLinkNode n3 = {3, &n1, &n2, nullptr};

//    TreeNode n4 = {1, nullptr, nullptr};
//    TreeNode n5 = {1, nullptr, nullptr};
//    TreeNode n6 = {3, &n5, &n4};


    s.connect(&n3);
    return 0;

}


