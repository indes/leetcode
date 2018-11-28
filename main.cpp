
#include "dynamic-programming/unique-paths-ii/Solution.h"

using namespace std;

int main() {
    Solution s;
//    ListNode n1 = {1, nullptr}, n2 = {6, &n1}, n3 = {5, &n2}, n4{9, nullptr}, n5{9, &n4}, n6{2, &n5}, n7{1, &n6};
    vector<vector<int>> v1;
    v1.push_back(vector<int>{1, 0});
//    v1.push_back(vector<int>{0, 1, 0});
//    v1.push_back(vector<int>{0, 0, 0});

//    auto res = s.removeNthFromEnd(&n5, 2);
    auto res = s.uniquePathsWithObstacles(v1);
    return 0;

}


