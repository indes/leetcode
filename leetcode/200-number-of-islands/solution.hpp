//
// Created by li on 2019/9/6.
//

#ifndef LEETCODE_SOLUTION_HPP
#define LEETCODE_SOLUTION_HPP

#include <vector>


using namespace std;

class Solution {
public:
    int numIslands(const vector<vector<char>> &grid) {


        if (grid.empty() or grid[0].empty()) {
            return 0;
        }
        parent = vector<vector<pair<int, int> > >(grid.size(),
                                                  vector<pair<int, int>>(grid[0].size(), pair<int, int>(-1, -1)));
        int count = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] == '1') {
                    // bool merged = false;
                    count++;
                    if (i - 1 >= 0) {
                        if (grid[i - 1][j] == '1' and !is_a_set(i, j, i - 1, j)) {
                            union_set(i, j, i - 1, j);
                            count--;
                        }
                    }

                    if (j - 1 >= 0) {
                        if (grid[i][j - 1] == '1' and !is_a_set(i, j, i, j - 1)) {
                            union_set(i, j, i, j - 1);
                            count--;
                        }
                    }
                }
            }
        }

        return count;
    }

    Solution() : parent() {}

private:
    vector<vector<pair<int, int> > > parent;

    pair<int, int> get_root(int x, int y) {
        auto root_x = x;
        auto root_y = y;

        while (parent[root_x][root_y] != pair<int, int>(-1, -1)) {
            auto root_pair = parent[root_x][root_y];
            root_x = root_pair.first;
            root_y = root_pair.second;
        }

        return {root_x, root_y};
    }

    bool is_a_set(int x1, int y1, int x2, int y2) {
        return get_root(x1, y1) == get_root(x2, y2);
    }

    void union_set(int x1, int y1, int x2, int y2) {
        auto root_1 = get_root(x1, y1);
        auto root_2 = get_root(x2, y2);
        parent[root_1.first][root_1.second] = root_2;
    }
};


#endif //LEETCODE_SOLUTION_HPP
