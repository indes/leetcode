//
// Created by Li on 2018/12/4.
//

#include "Solution.h"

string Solution::reverseVowels(string s) {

    set<char> vowel_set{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    string::iterator p1 = s.begin(), p2 = s.end() - 1;
    char temp;
    while (p1 <= p2) {
        if (vowel_set.find(*p1) != vowel_set.end()) {
            if (vowel_set.find(*p2) != vowel_set.end()) {
                temp = *p1;
                *p1 = *p2;
                *p2 = temp;
                ++p1;
                --p2;
            } else {
                --p2;
            }

        } else {
            ++p1;
        }
    }


    return s;
}
