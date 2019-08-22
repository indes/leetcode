
#include "leetcode/139-word-break/solution.hpp"

#include <iostream>

using namespace std;

int main() {
    Solution s;

    auto str = "applepenapple";
    vector<string> wordDict = {"apple", "pen"};
    //vector<int> v = {7, 1, 5, 3, 6, 4};
    auto p = s.wordBreak(str, wordDict);

    return 0;
}
