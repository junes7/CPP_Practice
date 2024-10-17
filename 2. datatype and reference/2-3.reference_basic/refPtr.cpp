/*
변수
12 0xe297fffa24
포인터
12 0xe297fffa18
더블 포인터
12 0xe297fffa10
참조자
12 0xe297fffa24
포인터 참조자
12 0xe297fffa18
더블 포인터 참조자
12 0xe297fffa10


*/
#include <iostream>
using namespace std;

int main(void) {
    // 변수, 포인터, 더블 포인터 선언
    int num = 12;
    int *ptr = &num;
    int **dptr = &ptr;
    // 값 확인
    cout << num << ' ' << &num << endl;
    cout << *ptr << ' ' << &ptr << endl;
    cout << **dptr << ' ' << &dptr << endl;
    // 변수, 포인터, 더블 포인터 참조자 선언
    int &ref = num;
    int *(&pref) = ptr;
    int **(&dpref) = dptr;
    // 참조자 값 확인
    cout << ref << ' ' << &ref << endl;
    cout << *pref << ' ' << &pref << endl;
    cout << **dpref << ' ' << &dpref << endl;

    return 0;
}