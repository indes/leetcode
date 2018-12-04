
#include "string/reverse-vowels-of-a-string/Solution.h"

using namespace std;

#include <vector>

int main() {
    Solution s;
//    ListNode n1 = {1, nullptr}, n2 = {6, &n1}, n3 = {5, &n2}, n4{9, nullptr}, n5{9, &n4}, n6{2, &n5}, n7{1, &n6};
    vector<vector<int>> v1;
    v1.push_back(vector<int>{1});
    v1.push_back(vector<int>{2, 4});

    v1.push_back(vector<int>{2, 1, 3});
    v1.push_back(vector<int>{1, 6, 4, 7});

    vector<int> v2{1, 3, 4, 5, 2};
    auto res = s.reverseVowels("leetcode");
    return 0;

}


