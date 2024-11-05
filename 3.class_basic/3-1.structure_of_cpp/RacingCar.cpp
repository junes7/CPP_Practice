/*
    $ 정의할 변수
    (소유자 ID 길이)ID_LEN 20, (최고 속도)MAX_SPD 200,
    (연료 단계)FUEL_STEP 2, (가속 단계)ACC_STEP 10,
    (브레이크 단계)BRK_STEP 10
    $ Car구조체
    소유자ID(gamerID),연료량(fuelGauge),현재속도(curSpeed)
    $ 함수 종류:
    차량상태(ShowCarState)
    소유자ID: run99   run99   sped77
    연료량:   96%     96%     98%
    현재속도: 20km/s  10km/s  0km/s
    $ id 2개
    run99(ACC,ACC,SCS,BRK,SCS), sped77(ACC,BRK,SCS)
*/
#include <iostream>
using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

typedef struct car {
    char gamerID[ID_LEN];
    int fuelGauge;
    int curSpeed;
} Car;

void ShowCarState(const Car &car) {
    cout << "소유자ID: " << car.gamerID << endl;
    cout << "연료량: " << car.fuelGauge << "%" << endl;
    cout << "현재속도: " << car.curSpeed << "km/s" << endl
         << endl;
}

void Accel(Car &car) {
    if (car.fuelGauge <= 0)
        return;
    else
        car.fuelGauge -= FUEL_STEP;
    if (car.curSpeed + ACC_STEP >= MAX_SPD) {
        car.curSpeed = MAX_SPD;
        return;
    }
    car.curSpeed += ACC_STEP;
}

void Break(Car &car) {
    if (car.curSpeed < BRK_STEP) {
        car.curSpeed = 0;
        return;
    }
    car.curSpeed -= BRK_STEP;
}

int main(void) {
    Car run99 = {"run99", 100, 0};
    Accel(run99);
    Accel(run99);
    ShowCarState(run99);
    Break(run99);
    ShowCarState(run99);
    Car sped77 = {"sped77", 100, 0};
    Accel(sped77);
    Break(sped77);
    ShowCarState(sped77);
    return 0;
}