/*
    SwapByRef2(23, 45)
    → 컴파일 에러 발생

    매개변수 선언위치에 참조자가 선언되었고
    참조자는 상수를 참조할 수 없기 때문에
    매개변수 인자로는 변수가 등장해야 합니다.
    SwapByRef2 함수의 매개변수가 상수를 전달받아
    컴파일 에러가 발생했습니다.
*/
#include <iostream>

void SwapByRef2(int &ref1, int &ref2) {
    int t = ref1;
    ref1 = ref2;
    ref2 = t;
}

int main(void) {
    // SwapByRef2(23, 45);

    return 0;
}