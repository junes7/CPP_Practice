/*
    3
    7
    8
*/
#include <iostream>

using namespace std;

int add(int num1 = 1, int num2 = 2);

int main(void) {
    cout << add() << endl;
    cout << add(5) << endl;
    cout << add(3, 5) << endl;
    return 0;
}

int add(int num1, int num2) {
    return num1 + num2;
}