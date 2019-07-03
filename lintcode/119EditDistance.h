//
// Created by Li on 2019/7/2.
//

#ifndef LEETCODE_EDITDISTANCE_H
#define LEETCODE_EDITDISTANCE_H


#include <vector>
#include <string>

using namespace std;

class editDistance {
public:
    int minDistance(const string &word1, const string &word2) {

        vector<vector<int>> v(word1.size() + 1, vector<int>(word2.size() + 1, 0));
        for (int i = 0; i <= word1.size(); ++i) {
            v[i][0] = i;
        }

        for (int j = 0; j <= word2.size(); ++j) {
            v[0][j] = j;
        }


        for (int i = 1; i <= word1.size(); ++i) {
            for (int j = 1; j <= word2.size(); ++j) {
                if (word1[i - 1] == word2[j - 1]) {
                    v[i][j] = v[i - 1][j - 1];
                } else {
                    v[i][j] = min(min(v[i - 1][j - 1] + 1, v[i][j - 1] + 1), v[i - 1][j] + 1);
                }
            }

        }
        return v.back().back();
    }
};


#endif //LEETCODE_EDITDISTANCE_H
