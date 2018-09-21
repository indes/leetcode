#include <iostream>
#include <vector>
#include "PlusOne/PlusOne.h"

using namespace std;

int main() {

    vector<int> nums = {9, 9};
    PlusOne s;

//    s.moveZeroes(nums);
    nums = s.plusOne(nums);
    return 0;
}


