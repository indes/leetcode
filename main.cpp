
#include "TwoSum/TwoSum.h"

using namespace std;

int main() {
    TwoSum s;
    vector<int> v1 = {4, 0, 0, 0, 0, 0}, v2 = {1, 2, 3, 5, 6};
//    s.merge(v1, 1, v2, 5);
    auto a = s.twoSum(v2, 7);

    return 0;
}


