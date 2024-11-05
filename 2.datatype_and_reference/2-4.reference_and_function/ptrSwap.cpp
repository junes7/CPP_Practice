/*
    call-by-reference
    val1: 20
    val2: 10

    SwapByRef1
*/
#include <iostream>
using namespace std;

void SwapByRef1(int *ptr1, int *ptr2) {
    int t = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = t;
}

int main(void) {
    int n1 = 10;
    int n2 = 20;
    SwapByRef1(&n1, &n2);
    cout << "val1: " << n1 << endl;
    cout << "val2: " << n2 << endl;
    return 0;
}