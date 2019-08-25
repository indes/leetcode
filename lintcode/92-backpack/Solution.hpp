//
// Created by Li on 6/15/2019.
//

#ifndef LEETCODE_SOLUTION_HPP
#define LEETCODE_SOLUTION_HPP

#include <vector>
#include <algorithm>

using std::vector;
using std::max;

class Solution {
public:
    /**
     * @param m: An integer m denotes the size of a backpack
     * @param A: Given n items with size A[i]
     * @return: The maximum size
     */
    int backPack(int m, vector<int> &A) {
        vector<vector<int>> v(A.size(), vector<int>(m + 1, 0));
        for (int k = 0; k <= m; ++k) {
            if (A[0] <= k) {
                v[0][k] = A[0];
            }
        }

        for (int i = 1; i < A.size(); ++i) {
            for (int j = 1; j <= m; ++j) {
                if (A[i] > j) {
                    v[i][j] = v[i - 1][j];
                } else {
                    v[i][j] = max(v[i - 1][j - A[i]] + A[i], v[i - 1][j]);

                }
            }
        }

        return v.back().back();
    }
};

#endif //LEETCODE_SOLUTION_HPP
