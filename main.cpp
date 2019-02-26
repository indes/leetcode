
#include "sorting-and-searching/shell_sort/ShellSort.h"

using namespace std;

#include <iostream>

int main() {

    ShellSort b;
    vector<int> v1{3, 1, 5, 6, 4, 7, 8, 2, 9};
    b.sort(v1);
    for (auto i:v1) {
        std::cout << i << " ";
    }
}


