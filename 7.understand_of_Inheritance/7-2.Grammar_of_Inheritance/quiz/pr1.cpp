#include <iostream>
using namespace std;

class Car {
   private:
    int gasolineGauge;

   public:
    Car(const int gasGauge) : gasolineGauge(gasGauge) {
        // empty
    }

    int GetGasGauge() const {
        return gasolineGauge;
    }
};

class HybridCar : public Car {
   private:
    int electricGauge;

   public:
    HybridCar(const int gasGauge, const int elecGauge)
        : Car(gasGauge), electricGauge(elecGauge) {
        // empty
    }

    int GetElecGauge() const {
        return electricGauge;
    }
};

class HybridWaterCar : public HybridCar {
   private:
    int waterGauge;

   public:
    HybridWaterCar(const int gasGauge, const int elecGauge, const int wGauge)
        : HybridCar(gasGauge, elecGauge), waterGauge(wGauge) {
        // empty
    }

    void ShowCurrentGauge() const {
        cout << "잔여 가솔린: " << GetGasGauge() << endl;
        cout << "잔여 전기량: " << GetElecGauge() << endl;
        cout << "잔여 워터량: " << waterGauge << endl;
    }
};

int main(void) {
    HybridWaterCar wCar(100, 79, 85);
    wCar.ShowCurrentGauge();
    return 0;
}