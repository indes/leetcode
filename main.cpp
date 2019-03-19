
#include "sorting-and-searching/merge-intervals/Solution.h"

using namespace std;

int main() {
    Solution s;
//    vector<int> v = {5, 7, 7, 8, 8, 10};
//    TreeNode n5 = {2, nullptr, nullptr};
//    TreeNode n4 = {1, nullptr, &n5};
//    TreeNode n3 = {4, nullptr, nullptr};
//    TreeNode n2 = {3, &n4, &n3};
    vector<Interval> v;
    v.emplace_back(1, 3);
    v.emplace_back(2, 6);
    v.emplace_back(8, 10);
    v.emplace_back(15, 18);

    auto res = s.merge(v);
//    auto res = s.partition("aab");
//    cout << v2 << endl;
//    cout << res << endl;
    return 0;
}


