/*
    참조자
    12
    포인터 참조자
    12
    더블 포인터 참조자
    12
*/
#include <iostream>
using namespace std;

int main(void) {
    // 변수, 포인터, 더블 포인터 선언
    int num = 12;
    int *ptr = &num;
    int **dptr = &ptr;
    // 값 확인
    cout << num << endl;
    cout << *ptr << endl;
    cout << **dptr << endl;
    // 변수, 포인터, 더블 포인터 참조자 선언
    int &ref = num;
    int *(&pref) = ptr;
    int **(&dpref) = dptr;
    // 참조자 값 확인
    cout << ref << endl;
    cout << *pref << endl;
    cout << **dpref << endl;

    return 0;
}