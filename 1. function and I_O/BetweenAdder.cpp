#include <iostream>

int main(void) {
    int val3, val4;
    std::cout << "�� ���� �����Է�: ";
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
    std::cout << "�� �� ������ ���� ��: " << result2 << std::endl;
    return 0;
}
/*
    �� ���� �����Է� :3 7
    �� �� ������ ���� ��: 15
*/
