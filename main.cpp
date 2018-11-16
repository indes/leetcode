
#include "search-insert-position/Solution.h"

//using namespace std;

int main() {
    Solution s;
//    vector<int> v1 = {4, 5, 6, 7, 0, 1, 2}, v2 = {1,2,3};
//    s.merge(v1, 1, v2, 5);
//    auto a = s.twoSum(v2, 7);
//    vector<vector<int>> v;
    vector<int> v({1, 3, 5, 7});
    for (int i = 0; i < 3; ++i) {

    }
//    v.push_back({1, 2, 3, 4});
//    v.push_back({10, 11, 16, 20});
//    v.push_back({23, 30, 34, 50});
//    vector<int> v1({-5});
//    v.push_back(v1);
    auto res = s.searchInsert(v, 13);
    return 0;
}


