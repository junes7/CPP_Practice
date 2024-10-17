/*
    1
    3
    5
*/
#include <iostream>
using namespace std;

int main(void) {
    int arr[3] = {1, 3, 5};
    int &ref1 = arr[0];
    int &ref2 = arr[1];
    int &ref3 = arr[2];
    // 참조자(reference)
    cout << ref1 << endl;
    cout << ref2 << endl;
    cout << ref3 << endl;
    // 주소값 이동(move address)
    cout << *(arr + 0) << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;
    return 0;
}