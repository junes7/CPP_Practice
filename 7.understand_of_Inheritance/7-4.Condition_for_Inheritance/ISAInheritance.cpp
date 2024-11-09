/*
NotebookComp nc("이수종", 5);
TabletNotebook tn("정수영", 5, "ISE-241-242");
이동하면서 요청 내용을 계산합니다.
필기 내용을 처리합니다.
*/
#include <cstring>
#include <iostream>
using namespace std;

class Computer {
   private:
    char owner[50];

   public:
    Computer(const char *name) {
        strcpy(owner, name);
    }

    void Calculation() const {
        cout << "요청 내용을 계산합니다." << endl;
    }
};

class NotebookComp : public Computer {
   private:
    int battery;

   public:
    NotebookComp(const char *name, const int initCharg)
        : Computer(name), battery(initCharg) {}

    void Charging() { battery += 5; }

    void UseBattery() { battery -= 1; }

    int GetBatteryInfo() const { return battery; }

    void MoveCalculation() {
        if (GetBatteryInfo() < 1) {
            cout << "충전이 필요합니다." << endl;
            return;
        }
        cout << "이동하면서 ";
        Calculation();
        UseBattery();
    }
};

class TabletNotebook : public NotebookComp {
   private:
    char rgstPenModel[50];

   public:
    TabletNotebook(const char *name, const int initCharg, const char *pen)
        : NotebookComp(name, initCharg) {
        strcpy(rgstPenModel, pen);
    }

    void Write(const char *penInfo) {
        if (GetBatteryInfo() < 1) {
            cout << "충전이 필요합니다." << endl;
            return;
        }
        if (strcmp(rgstPenModel, penInfo) != 0) {
            cout << "등록된 펜이 아닙니다." << endl;
            return;
        }
        cout << "필기 내용을 처리합니다." << endl;
        UseBattery();
    }
};

int main(void) {
    NotebookComp nc("이수종", 5);
    TabletNotebook tn("정수영", 5, "ISE-241-242");
    nc.MoveCalculation();
    tn.Write("ISE-241-242");
    return 0;
}