
#include "tree/kth-smallest-element-in-a-bst/Solution.h"

using namespace std;

int main() {
    Solution s;
//    vector<int> v = {5, 7, 7, 8, 8, 10};
//    TreeNode n5 = {2, nullptr, nullptr};
//    TreeNode n4 = {1, nullptr, &n5};
//    TreeNode n3 = {4, nullptr, nullptr};
//    TreeNode n2 = {3, &n4, &n3};



    TreeNode n1 = {1, nullptr, nullptr};
    TreeNode n2 = {2, &n1, nullptr};
    TreeNode n4 = {4, nullptr, nullptr};
    TreeNode n3 = {3, &n2, &n4};
    TreeNode n6 = {6, nullptr, nullptr};
    TreeNode n5 = {5, &n3, &n6};
    auto res = s.kthSmallest(&n5, 4);
//    auto res = s.partition("aab");
//    cout << v2 << endl;
//    cout << res << endl;
    return 0;
}


