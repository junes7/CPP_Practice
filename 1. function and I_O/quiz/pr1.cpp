/*
    1번째 정수 입력: 1
    2번째 정수 입력: 2
    3번째 정수 입력: 3
    4번째 정수 입력: 4
    5번째 정수 입력: 5
    정수 합계: 15
*/
#include <iostream>

using namespace std;

int main(void) {
    int num, result = 0;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << "번째 정수 입력: ";
        cin >> num;
        result += num;
    }
    cout << "정수 합계: " << result << endl;
    return 0;
}