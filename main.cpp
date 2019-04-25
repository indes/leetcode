
#include "graph/207-course-schedule/Solution.h"

#include <iostream>

using namespace std;

int main() {
    Solution s;

    vector<pair<int, int>> prerequisites = {{0, 2},
                                            {1, 2},
                                            {2, 0}};
    auto res = s.canFinish(3, prerequisites);
//    cout << res << endl;
    return 0;
}


