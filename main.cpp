
#include "./leetcode/150-evaluate-reverse-polish-notation/solution.hpp"


#include <iostream>

using namespace std;

int main() {
    Solution s;

    vector<string> a = {"2", "1", "+", "3", "*"};
    auto p =s.evalRPN(a);


    return 0;
}


