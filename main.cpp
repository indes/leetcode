
#include "graph/210-course-schedule-ii/Solution.h"

#include <iostream>

using namespace std;

int main() {
    Solution s;

    vector<pair<int, int>> prerequisites = {{1, 0}};
    auto res = s.findOrder(2, prerequisites);
//    cout << res << endl;
    return 0;
}


