/*
    strlen 문자열의 길이 계산
    strcat 문자열의 뒤에 덧붙이기
    strcpy 문자열 복사
    strcmp 문자열의 비교
*/
#include <cstring>
#include <iostream>
using namespace std;

int main(void) {
    // char *str1 = "ABC 123 ";
    // char *str2 = "DEF 456 ";
    /*
    pr1.cpp:6:18: warning: ISO C++ forbids converting
    a string constant to 'char*' [-Wwrite-strings]
    6 |     char *str1 = "ABC 123 ";
    */
    char str1[] = "ABC 123 ";
    char str2[] = "DEF 456 ";
    char str3[50];

    cout << strlen(str1) << endl;
    cout << strlen(str2) << endl;
    strcpy(str3, str1);
    cout << strlen(str3) << endl;
    strcat(str3, str2);
    cout << str3 << endl;

    if (strcmp(str1, str2) == 0)
        cout << "문자열이 같다." << endl;
    else
        cout << "문자열이 같지 않다." << endl;
    return 0;
}