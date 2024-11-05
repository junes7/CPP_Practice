/*
    구구단 정보 입력: 3
    3X1=3
    3X2=6
    3X3=9
    3X4=12
    3X5=15
    3X6=18
    3X7=21
    3X8=24
    3X9=27
*/
#include <iostream>

using namespace std;

int main(void) {
    int n;
    cout << "구구단 정보 입력: ";
    cin >> n;

    for (int i = 1; i < 10; i++) {
        cout << n << "X" << i << "=" << n * i << endl;
    }
    return 0;
}