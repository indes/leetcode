
#include "sorting-and-searching/insertion_sort/InsertionSort.h"

using namespace std;

#include <iostream>

int main() {

    InsertionSort b;
    vector<int> v{3, 1, 5, 6, 2, 4, 6, 7, 8, 2, 9};
    b.sort(v);
    for (auto i:v) {
        std::cout << i << " ";
    }
}


