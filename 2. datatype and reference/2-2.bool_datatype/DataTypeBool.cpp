/*
    Input number: 12
    Positive number

    IsPositive(int n)
*/
#include <iostream>
using namespace std;

bool IsPositive(int n) {
    if (n < 0) {
        return false;
    } else {
        return true;
    }
}

int main(void) {
    int n;
    cout << "Input number: ";
    cin >> n;
    bool IsPos = IsPositive(n);
    if (IsPos) {
        cout << "Positive number" << endl;
    } else {
        cout << "Negative number" << endl;
    }
    return 0;
}
