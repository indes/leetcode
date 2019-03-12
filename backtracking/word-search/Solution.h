//
// Created by Li on 2019/3/12.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <string>

using std::vector;
using std::string;

class Solution {
public:
    bool exist(vector<vector<char>> &board, string word) {

        if (word.empty()) {
            return true;
        }
        if (board.empty() or board[0].empty()) {
            return false;
        }
        this->board = &board;
        this->is_visited = vector<vector<bool>>();
        for (int i = 0; i < board.size(); ++i) {
            is_visited.emplace_back(board[0].size(), false);
        }
        this->word = word;
        string curr;
        exist_dfs(curr, 0, 0, 0);
        return ans;
    }

private:
    bool ans = false;
    string word;
    vector<vector<char>> *board;
    vector<vector<bool>> is_visited;

    void exist_dfs(string &curr, int level, int last_y, int last_x) {
        if (ans) return;

        for (int i = 0; i < curr.size(); ++i) {
            if (curr[i] != word[i]) return;
        }

        if (level == word.size()) {
            ans = true;
            return;
        }

        if (level == 0) {
            for (int i = 0; i < is_visited.size(); ++i) {
                for (int j = 0; j < is_visited[0].size(); ++j) {
                    is_visited[i][j] = true;
                    curr.push_back((*board)[i][j]);
                    exist_dfs(curr, level + 1, i, j);
                    curr.pop_back();
                    is_visited[i][j] = false;
                }
            }
        } else {
            for (int i = -1; i <= 1; i += 2) {
                int next_y = last_y + i;
                int next_x = last_x + i;
                if (next_y >= 0 and next_y < is_visited.size() and !is_visited[next_y][last_x]) {
                    is_visited[next_y][last_x] = true;
                    curr.push_back((*board)[next_y][last_x]);
                    exist_dfs(curr, level + 1, next_y, last_x);
                    curr.pop_back();
                    is_visited[next_y][last_x] = false;
                }
                if (next_x >= 0 and next_x < is_visited[0].size() and !is_visited[last_y][next_x]) {
                    is_visited[last_y][next_x] = true;
                    curr.push_back((*board)[last_y][next_x]);
                    exist_dfs(curr, level + 1, last_y, next_x);
                    curr.pop_back();
                    is_visited[last_y][next_x] = false;
                }
            }
        }
    }
};


#endif //LEETCODE_SOLUTION_H
