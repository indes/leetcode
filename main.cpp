
#include "union-find/friend-circles/Solution.h"

using namespace std;

int main() {
    Solution s;
    vector<vector<int>> v = {{1, 1, 0},
                             {1, 1, 0},
                             {0, 0, 1}};
    auto res = s.findCircleNum(v);
//    cout << v2 << endl;
    return 0;
}


