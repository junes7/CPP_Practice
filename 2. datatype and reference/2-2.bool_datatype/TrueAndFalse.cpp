/*
    true: 1
    false: 0
    0 1 2 3 4 5 6 7 8 9 10
    sizeof 1: 4
    sizeof 0: 4
    sizeof true: 1
    sizeof false: 1
*/
#include <iostream>

using namespace std;

int main(void) {
    cout << "true: " << true << endl;
    cout << "false: " << false << endl;
    int i = 0, num = 10;
    while (true) {
        cout << i++ << ' ';
        if (i > num) {
            break;
        }
    }
    cout << endl;
    cout << "sizeof 1: " << sizeof(1) << endl;
    cout << "sizeof 0: " << sizeof(0) << endl;
    cout << "sizeof true: " << sizeof(true) << endl;
    cout << "sizeof false: " << sizeof(false) << endl;
    return 0;
}