/*
    당신의 이름: 홍길동
    당신의 전화번호: 010-1234-1234
*/
#include <iostream>

using namespace std;

int main(void) {
    char name[50];
    char phone[50];
    cout << "이름: ";
    cin >> name;
    cout << "전화번호: ";
    cin >> phone;

    cout << "당신의 이름: " << name << endl;
    cout << "당신의 전화번호: " << phone << endl;
    return 0;
}