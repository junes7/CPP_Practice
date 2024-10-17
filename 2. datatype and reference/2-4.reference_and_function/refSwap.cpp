/*
    call-by-reference
    val1: 20
    val2: 10

    SwapByRef2
*/
#include <iostream>
using namespace std;

void SwapByRef2(int &ref1, int &ref2) {
    int t = ref1;
    ref1 = ref2;
    ref2 = t;
}

int main(void) {
    int n1 = 10;
    int n2 = 20;
    SwapByRef2(n1, n2);
    cout << "val1: " << n1 << endl;
    cout << "val2: " << n2 << endl;
    return 0;
}
