/*
    30 20
    Z A
    5.555 1.111
*/
#include <iostream>

using namespace std;

void swap(int *num1, int *num2) {
    int t = *num1;
    *num1 = *num2;
    *num2 = t;
}

void swap(char *ch1, char *ch2) {
    char t = *ch1;
    *ch1 = *ch2;
    *ch2 = t;
}

void swap(double *dbl1, double *dbl2) {
    double t = *dbl1;
    *dbl1 = *dbl2;
    *dbl2 = t;
}

int main(void) {
    int num1 = 20, num2 = 30;
    swap(&num1, &num2);
    cout << num1 << ' ' << num2 << endl;

    char ch1 = 'A', ch2 = 'Z';
    swap(&ch1, &ch2);
    cout << ch1 << ' ' << ch2 << endl;

    double dbl1 = 1.111, dbl2 = 5.555;
    swap(&dbl1, &dbl2);
    cout << dbl1 << ' ' << dbl2 << endl;
    return 0;
}