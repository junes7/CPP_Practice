#include <math.h>
#include <stdlib.h>

#include <iostream>
using namespace std;

int main(void) {
    // seed 값을 다르게 주어 매번 돌아갈때마다 현재 시간을 측정해 다른 난수를 생성해주기 위해 필요합니다!
    // rand % 100에서 100은 0에서 100까지의 랜덤값을 출력하라면 벙위 제약입니다.
    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        printf("Random number: %d %d\n", i, rand() % 100);
    }
    return 0;
}