
#include "sorting-and-searching/994-rotting-oranges/Solution.h"


using namespace std;

int main() {
    Solution s;
    vector<vector<int>> v({{2, 1, 1},
                           {0, 1, 1},
                           {1, 0, 1}});
    auto res = s.orangesRotting(v);
    return 0;
}


