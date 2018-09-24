#include <iostream>
#include "ReverseString/ReverseString.h"

using namespace std;

int main() {

//    vector<int> nums1 = {4, 9, 5}, nums2 = {9, 4, 9, 8, 4};
    string str = "abcd";
    ReverseString s;

//    s.moveZeroes(nums);
    cout << s.reverseString(str) << endl;


    return 0;
}


