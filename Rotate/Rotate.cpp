//
// Created by Li on 2018/9/18.
//

#include "Rotate.h"

using namespace std;

void Rotate::rotate(vector<vector<int>> &matrix) {
    int dimension = (*matrix.begin()).size();

    for (int i = 0; i < dimension; ++i) {
        for (int j = i + 1; j < dimension; ++j) {
            std::swap(matrix[j][i], matrix[i][j]);
        }
        reverse(matrix[i].begin(), matrix[i].end());

    }
}
