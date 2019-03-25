
#include "stack-and-queue/155-min-stack/MinStack.h"

using namespace std;

int main() {
    MinStack obj;
    obj.push(-2);
    obj.push(0);
    obj.push(-3);
    auto min_i = obj.getMin();
    obj.pop();
    auto m2 = obj.top();

    min_i = obj.getMin();
    return 0;
}


