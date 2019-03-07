//
// Created by Li on 2019/3/7.
//

#include "Solution.h"

void Solution::setZeroes(vector<vector<int>> &matrix) {
    int row = -1, col = -1;

    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[0].size(); ++j) {

            if (matrix[i][j] == 0) {
                row = i;
                col = j;
                break;
            }
        }
        if (row != -1) break;
    }
    if (row == -1) return;
    for (int k = 0; k < matrix[0].size(); ++k) {
        if (matrix[row][k] == 0) {
            matrix[row][k] = 99;
        } else {
            matrix[row][k] = 98;
        }
    }

    for (int l = 0; l < matrix.size(); ++l) {
        if (matrix[l][col] == 0) {
            matrix[l][col] = 99;
        } else {
            matrix[l][col] = 98;
        }
    }

    for (int m = 0; m < matrix.size(); ++m) {
        for (int i = 0; i < matrix[0].size(); ++i) {
            if (matrix[m][i] == 0) {
                matrix[row][i] = 99;
                matrix[m][col] = 99;
            }
        }
    }

    for (int n = 0; n < matrix.size(); ++n) {
        if (matrix[n][col] == 99) {
            for (int i = 0; i < matrix[0].size(); ++i) {
                matrix[n][i] = 0;
            }
        }
    }

    for (int n = 0; n < matrix[0].size(); ++n) {
        if (matrix[row][n] == 99) {
            for (int i = 0; i < matrix.size(); ++i) {
                matrix[i][n] = 0;
            }
        }
    }
    for (int i1 = 0; i1 < matrix.size(); ++i1) {
        matrix[i1][col] = 0;
    }
    for (int j1 = 0; j1 < matrix[0].size(); ++j1) {
        matrix[row][j1] = 0;
    }

}
