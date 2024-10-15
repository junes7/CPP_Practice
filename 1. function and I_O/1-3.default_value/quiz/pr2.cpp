#include <iostream>

int SimpleFunc(int a = 10) {
    return a + 1;
}

int SimpleFunc(void) {
    return 10;
}

int main(void) {
    // SimpleFunc();
    return 0;
}

/*
    SimpleFunc();처럼 인자를 전달하지 않으면서 함수를 호출하는 경우,
    두 함수 모두 호출조건을 만족하기 때문에 오버로딩된 함수 호출이
    모호하다고 컴파일 에러가 발생합니다.
*/