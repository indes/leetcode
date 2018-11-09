
#include "3sum-closest/Solution.h"

using namespace std;

int main() {
    Solution s;
    vector<int> v1 = {-1, 2, 1, -4}, v2 = {1, 2, 3, 5, 6};
//    s.merge(v1, 1, v2, 5);
//    auto a = s.twoSum(v2, 7);
    s.threeSumClosest(v1, 1);
    return 0;
}


