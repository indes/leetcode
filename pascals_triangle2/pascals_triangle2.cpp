//
// Created by Li on 2018/11/6.
//

#include "pascals_triangle2.h"

vector<int> pascals_triangle2::getRow(int rowIndex) {
    vector<int> v(rowIndex + 1, 1);

    if (rowIndex == 0) return vector<int>(1, 1);
    if (rowIndex == 1) return vector<int>(2, 1);

    for (int i = 0; i < rowIndex + 1; ++i) {
        for (int j = i; j > 1; --j) {
            v[j - 1] = v[j - 1] + v[j - 2];
        }
    }
    return v;
}
