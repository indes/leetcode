//
// Created by Li on 2018/9/18.
//

#include "Rotate.h"

void Rotate::rotate(vector<vector<int>> &matrix) {
    int dimension = (*matrix.begin()).size();
    vector<vector<int>> m(matrix);
    for (int i = 0; i <= dimension; ++i) {
        matrix[dimension - i][i] = m[i][dimension - i];
    }
}
