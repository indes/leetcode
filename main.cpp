#include <iostream>
#include <vector>
#include "MoveZeroes/MoveZeroes.h"

using namespace std;

int main() {

    vector<int> nums = {0, 1, 0, 3, 12};
    MoveZeroes s;

    s.moveZeroes(nums);

    return 0;
}


