/*
    참조자 포인터를 사용해
    SwapPointer 함수 구현
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
    cout << *ptr1 << endl;
    cout << *ptr2 << endl;
    SwapPointer(ptr1, ptr2);
    cout << *ptr1 << endl;
    cout << *ptr2 << endl;
}
