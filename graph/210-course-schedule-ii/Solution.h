//
// Created by Li on 2019/4/25.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> findOrderKahn(int numCourses, vector<pair<int, int>> &prerequisites) {
        vector<vector<int>> c(numCourses, vector<int>(numCourses, 0));
        vector<int> in_count(numCourses, 0);
        vector<int> sorted_node;
        queue<int> node_no_in;

        for (auto p:prerequisites) {
            c[p.second][p.first] = 1;
            in_count[p.first]++;
        }

        for (int i = 0; i < numCourses; ++i) {
            if (in_count[i] == 0) {
                node_no_in.push(i);
            }
        }

        while (!node_no_in.empty()) {
            int node = node_no_in.front();
            node_no_in.pop();
            sorted_node.push_back(node);

            for (int i = 0; i < numCourses; ++i) {
                if (c[node][i] > 0) {
                    c[node][i]--;
                    in_count[i]--;
                    if (in_count[i] == 0) {
                        node_no_in.push(i);
                    }
                }
            }
        }

        for (int j = 0; j < numCourses; ++j) {
            if (in_count[j] != 0) {
                return vector<int>();
            }
        }

        return sorted_node;
    }

public:
    vector<int> findOrder(int numCourses, vector<pair<int, int>> &prerequisites) {
        vector<vector<int>> c(numCourses, vector<int>(numCourses, 0));
        vector<int> visited(numCourses, 0); /* 0 代表没访问过，1 代表之前访问过，2 代表当前正在访问 */
        vector<int> sorted_node;
        queue<int> node_no_in;

        for (auto p:prerequisites) {
            c[p.second][p.first] = 1;
        }

        bool ans = true;
        for (int i = 0; i < numCourses; ++i) {
            ans = DFS(i, visited, c, sorted_node);
            if (!ans) {
                return vector<int>();
            }
        }
        vector<int> rtn;
        for (int j = sorted_node.size() - 1; j >= 0; --j) {
            rtn.push_back(sorted_node[j]);
        }
        return rtn;

    }

private:
    bool DFS(int node, vector<int> &visited, vector<vector<int>> &adj, vector<int> &sorted_node) {
        if (visited[node] == 2) {
            return false;
        }
        if (visited[node] == 1) {
            return true;
        }

        if (visited[node] == 0) {
            visited[node] = 2;
            bool rtn = true;
            for (int i = 0; i < visited.size(); ++i) {
                if (adj[node][i] != 0) {
                    rtn = DFS(i, visited, adj, sorted_node);
                    if (!rtn) {
                        return false;
                    }
                }
            }
            sorted_node.push_back(node);
            visited[node] = 1;
        }

        return true;
    }
};

#endif //LEETCODE_SOLUTION_H
