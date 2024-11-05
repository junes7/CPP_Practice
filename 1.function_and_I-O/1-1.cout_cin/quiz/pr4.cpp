/*
    판매 금액을 만원 단위로 입력(-1 to end): 100
    이번 달 급여: 62만원
    판매 금액을 만원 단위로 입력(-1 to end): 200
    이번 달 급여: 74만원
    판매 금액을 만원 단위로 입력(-1 to end): -1
    프로그램을 종료합니다.
*/
#include <iostream>

using namespace std;

int salary(int n) {
    return (int)50 + n * 0.12;
}

int main(void) {
    int n;
    while (1) {
        cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
        cin >> n;
        if (n == -1)
            break;
        cout << "이번 달 급여: " << salary(n) << "만원" << endl;
    }
    cout << "프로그램을 종료합니다." << endl;
    return 0;
}