//
// Created by Li on 2018/11/6.
//

#include "pascals_triangle.h"

vector<vector<int>> pascals_triangle::generate(int numRows) {
    vector<vector<int>> v;
    v.resize(numRows);

    for (int i = 0; i < numRows; ++i) {
        v[i].resize(i + 1);
        *(v[i].begin()) = 1;
        *(v[i].end() - 1) = 1;
        for (int j = 1; j < i; ++j) {
            v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
        }
    }
    return v;
}
