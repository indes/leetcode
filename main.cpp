
#include "3sum/threeSum.h"

using namespace std;

int main() {
    ThreeSum s;
    vector<int> v1 = {-1, 0, 1, 2, -1, -4}, v2 = {1, 2, 3, 5, 6};
//    s.merge(v1, 1, v2, 5);
//    auto a = s.twoSum(v2, 7);
    s.treeSum(v1);
    return 0;
}


