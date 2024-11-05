/*
    sin(0.14)
    abs(-1.25)
    Result 0.139543
    Result 1.250000
*/
#include <math.h>

#include <cstdio>
#include <cstring>

int main(void) {
    char str1[] = "Result";
    char str2[30];
    strcpy(str2, str1);
    printf("%s %f\n", str1, sin(0.14));
    printf("%s %f\n", str2, abs(-1.25));
    return 0;
}
