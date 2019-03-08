//
// Created by Li on 2019/3/8.
//

#include "Solution.h"

vector<vector<string>> Solution::groupAnagrams(vector<string> &str_s) {
    map<map<int, int>, vector<string>> i2s_map;
    vector<vector<string>> v;
    for (const auto &s:str_s) {
        map<int, int> char_index_map;
        for (auto c:s) {
            char_index_map[c - 'a']++;
        }
        if (i2s_map.find(char_index_map) == i2s_map.end()) {
            i2s_map[char_index_map] = vector<string>({s});
        } else {
            i2s_map[char_index_map].push_back(s);
        }
    }

    for (auto m:i2s_map) {
        v.push_back(m.second);
    }
    return v;
}
