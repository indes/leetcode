
#include "string/longest-word-in-dictionary-through-deleting/Solution.h"

using namespace std;

int main() {
    Solution s;
//    ListNode n1 = {1, nullptr}, n2 = {6, &n1}, n3 = {5, &n2}, n4{9, nullptr}, n5{9, &n4}, n6{2, &n5}, n7{1, &n6};
    vector<string> v{"ale", "apple", "monkey", "plea"};
    auto res = s.findLongestWord("abpcplea", v);
    return 0;

}


