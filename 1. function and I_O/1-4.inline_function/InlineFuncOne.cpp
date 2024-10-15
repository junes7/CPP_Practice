/*
    25
    144
*/
#include <iostream>

using namespace std;

inline int SQUARE(int x) {
    return x * x;
}

int main(void) {
    cout << SQUARE(5) << endl;
    cout << SQUARE(12) << endl;
    cout << SQUARE(3.15) << endl;
    return 0;
}