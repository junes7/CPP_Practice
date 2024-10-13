#include <iostream>

int main(void) {
    int val3, val4;
    std::cout << "두 개의 숫자입력: ";
    std::cin >> val3 >> val4;
    int result2 = 0;
    if (val3 < val4) {
        for (int i = val3 + 1; i < val4; i++) {
            result2 += i;
        }
    } else {
        for (int i = val4 + 1; i < val3; i++) {
            result2 += i;
        }
    }
    std::cout << "두 수 사이의 정수 합: " << result2 << std::endl;
    return 0;
}
/*
    두 개의 숫자입력 :3 7
    두 수 사이의 정수 합: 15
*/
