/*
    MakeStrAdr
    I am so happy~
*/
#include <iostream>
using namespace std;

void SwapPointer(int *(&pref1), int *(&pref2)) {
    int *t = pref1;
    pref1 = pref2;
    pref2 = t;
}

int main(void) {
    int n1 = 5;
    int *ptr1 = &n1;
    int n2 = 10;
    int *ptr2 = &n2;
    cout << "num1: " << *ptr1 << endl;
    cout << "num2: " << *ptr2 << endl;
    SwapPointer(ptr1, ptr2);
    cout << "num1: " << *ptr1 << endl;
    cout << "num2: " << *ptr2 << endl;
    return 0;
}
