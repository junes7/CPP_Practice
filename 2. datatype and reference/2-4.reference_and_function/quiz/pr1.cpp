/*
    function name:
    IncreOne
    InvertSign
*/
#include <iostream>
using namespace std;

void IncreOne(int &n) {
    n += 1;
}

void InvertSign(int &n) {
    n *= -1;
}

int main(void) {
    int n = 12;
    IncreOne(n);
    cout << "Increment result: " << n << endl;
    InvertSign(n);
    cout << "InvertSign result: " << n << endl;
}