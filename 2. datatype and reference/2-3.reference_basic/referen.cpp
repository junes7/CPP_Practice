/*
    VAL: 3047
    REF: 3047
    VAL_Address: 0xacb3fffbe4
    REF_Address: 0xacb3fffbe4
*/
#include <iostream>
using namespace std;
int main(void) {
    int n1 = 1020;
    int &n2 = n1;
    n2 = 3047;
    cout << "VAL: " << n1 << endl;
    cout << "REF: " << n2 << endl;
    cout << "VAL_Address: " << &n1 << endl;
    cout << "REF_Address: " << &n2 << endl;
    return 0;
}