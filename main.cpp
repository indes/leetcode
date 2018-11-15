
#include "search-a-2d-matrix-ii/Solution2.h"

//using namespace std;

int main() {
    Solution2 s;
//    vector<int> v1 = {4, 5, 6, 7, 0, 1, 2}, v2 = {1,2,3};
//    s.merge(v1, 1, v2, 5);
//    auto a = s.twoSum(v2, 7);
    vector<vector<int>> v;
    vector<int> v1({-5});
    v.push_back(v1);
    bool is = s.searchMatrix(v, -5);
    return 0;
}


