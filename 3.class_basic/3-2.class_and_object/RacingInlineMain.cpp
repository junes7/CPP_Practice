/*
실행방법:
g++ -o b.exe CarInline.cpp RacingInlineMain.cpp
*/
#include "CarInline.h"

int main(void) {
    Car run99;
    run99.InitMembers("run99", 100);
    run99.Accel();
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
    return 0;
}