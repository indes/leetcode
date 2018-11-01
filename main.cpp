
#include "Rotate/Rotate.h"

using namespace std;

int main() {

    std::vector<std::vector<int>> v = {
            {5, 3, 1},
            {6, 1, 1},
            {1, 9, 8},
    };

    Rotate solution;
    solution.rotate(v);
//    vector<char> c = {5, 1, 1, 1, 7, 1, 1, 1, 7};
//    char c[10] = {5, 1, 1, 1, 7, 1, 1, 1, 7};
//    bool a = solution.rotate(c);

    return 0;
}


