/*
    참조자 포인터를 사용해
    SwapPointer 함수 구현
    결괏값으로 위 함수를 통해 주소는 변하지 않고 값만 바뀐 것을 알 수 있습니다.
*/
#include <iostream>
using namespace std;

void SwapPointer(int *(&pref1), int *(&pref2)) {
    int *t = pref1;
    pref1 = pref2;
    pref2 = t;
}

int main(void) {
    int num1 = 5;
    int *ptr1 = &num1;
    int num2 = 10;
    int *ptr2 = &num2;
    cout << *ptr1 << ' ' << &ptr1 << endl;
    cout << *ptr2 << ' ' << &ptr2 << endl;
    SwapPointer(ptr1, ptr2);
    cout << *ptr1 << ' ' << &ptr1 << endl;
    cout << *ptr2 << ' ' << &ptr2 << endl;
}
