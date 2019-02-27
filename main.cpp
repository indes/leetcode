
#include "sorting-and-searching/heap_sort/HeapSort.h"

using namespace std;

#include <iostream>

int main() {

    HeapSort h;
    vector<int> v1{3, 1, 5, 6, 4, 7, 8, 2};
    h.sort(v1);
    for (auto i:v1) {
        std::cout << i << " ";
    }
}


