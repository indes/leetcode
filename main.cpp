
#include "leetcode/200-number-of-islands/solution.hpp"

#include <iostream>

using namespace std;

int main() {
    Solution s;

    vector<vector<char>> v{{'1', '1', '1', '1', '0'},
                           {'1', '1', '0', '1', '0'},
                           {'1', '1', '0', '0', '0'},
                           {'0', '0', '0', '0', '0'}};
    auto p = s.numIslands(v);

    return 0;
}
