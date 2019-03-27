
#include "array/54-spiral-matrix/Solution.h"

using namespace std;

int main() {
    Solution s;
    vector<vector<int>> v = {{1, 2,  3,  4},
                             {5, 6,  7,  8},
                             {9, 10, 11, 12}};

    auto r = s.spiralOrder(v);
    return 0;
}


