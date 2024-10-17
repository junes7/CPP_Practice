/*
    call-by-value
    val1: 10
    val2: 20

    SwapByValue
*/
#include <iostream>
using namespace std;

void SwapByValue(int n1, int n2) {
    int t = n1;
    n1 = n2;
    n2 = t;
}

int main(void) {
    int n1 = 10;
    int n2 = 20;
    SwapByValue(n1, n2);
    cout << "val1: " << n1 << endl;
    cout << "val2: " << n2 << endl;
    return 0;
}