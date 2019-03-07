//
// Created by Li on 2019/3/6.
//

#include "Solution.h"

int Solution::superEggDrop(int K, int N) {
//    if (K == 0 or N == 0) return 0;
//    if (K == 1) return N;
    int v[K + 1][N + 1];
    for (int i = 0; i < K + 1; ++i) {
        v[i][0] = 0;
    }
    for (int j = 0; j < N + 1; ++j) {
        v[0][j] = 0;
    }
    if (K > 0) {
        for (int j = 0; j < N + 1; ++j) {
            v[1][j] = j;
        }
    }

    for (int i = 2; i <= K; ++i) {
        for (int j = 1; j <= N; ++j) {
            int min = std::numeric_limits<int>::max();
            for (int x = 1; x <= j; ++x) {
                min = std::min(std::max(v[i - 1][x - 1], v[i][j - x]), min);
            }
            v[i][j] = min + 1;
        }
    }
    return v[K][N];
}
