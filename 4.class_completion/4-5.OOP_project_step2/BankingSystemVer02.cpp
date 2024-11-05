#include <cstring>
#include <iostream>
using namespace std;

class Person {
   private:
    char *name;
    int age;

   public:
    Person(const char *myname, const int myage) {
        name = new char[strlen(myname) + 1];
        strcpy(name, myname);
        age = myage;
    }

    void ShowPersonInfo() const {
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
    }

    ~Person() {
        delete[] name;
        cout << "called destructor!" << endl;
    }
};

namespace CAR_CONST {
enum {
    MAX_SPD = 200,
    FUEL_STEP = 2,
    ACC_STEP = 10,
    BRK_STEP = 10
};
}

class Car {
   private:
    char *gamerID;
    int fuelGauge;
    int curSpeed;

   public:
    Car(const char *ID, const int fuel) {
        gamerID = new char[strlen(ID) + 1];
        strcpy(gamerID, ID);
        fuelGauge = fuel;
    }

    void ShowCarState() const {
        cout << "소유자ID: " << gamerID << endl;
        cout << "연료량: " << fuelGauge << "%" << endl;
        cout << "현재속도: " << curSpeed << "km/s" << endl
             << endl;
    }

    void Accel() {
        if (fuelGauge <= 0)
            return;
        else
            fuelGauge -= CAR_CONST::FUEL_STEP;
        if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD) {
            curSpeed = CAR_CONST::MAX_SPD;
            return;
        }
        curSpeed += CAR_CONST::ACC_STEP;
    }

    void Break() {
        if (curSpeed < CAR_CONST::BRK_STEP) {
            curSpeed = 0;
            return;
        }
        curSpeed -= CAR_CONST::BRK_STEP;
    }

    ~Car() {
        delete[] gamerID;
        cout << "called destructor!" << endl;
    }
};

class Point {
   private:
    int x;
    int y;

   public:
    Point(const int &xpos, const int &ypos) {
        x = xpos;
        y = ypos;
    }

    void ShowPointInfo() const {
        cout << "[" << x << ", " << y << "]" << endl;
    }

    int GetX() const { return x; }
    int GetY() const { return y; }
    bool SetX(const int &xpos) {
        if (xpos < 0 || xpos > 100) {
            cout << "벗어난 범위의 값 전달" << endl;
            return false;
        }
        x = xpos;
        return true;
    }
    bool SetY(const int &ypos) {
        if (ypos < 0 || ypos > 100) {
            cout << "벗어난 범위의 값 전달" << endl;
            return false;
        }
        y = ypos;
        return true;
    }
};

class Rectangle {
   private:
    Point upleft;
    Point lowright;

   public:
    Rectangle(const int &x1, const int &y1, const int &x2, const int &y2)
        : upleft(x1, y1), lowright(x2, y2) {
    }

    void ShowRecInfo() const {
        cout << "좌 상단: " << "[" << upleft.GetX() << ", ";
        cout << upleft.GetY() << "]" << endl;
        cout << "우 하단: " << "[" << lowright.GetX() << ", ";
        cout << lowright.GetY() << "]" << endl;
    }
};

class Circle {
   private:
    Point center;
    int radius;

   public:
    Circle(const int &x, const int &y, const int &r)
        : center(x, y) {
        radius = r;
    }

    void ShowCircleInfo() const {
        cout << "radius: " << radius << endl;
        center.ShowPointInfo();
    }
};

class Ring {
   private:
    Circle inCircle;
    Circle outCircle;

   public:
    Ring(const int &inX, const int &inY, const int &inR, const int &outX, const int &outY, const int &outR)
        : inCircle(inX, inY, inR), outCircle(outX, outY, outR) {
    }

    void ShowRingInfo() const {
        cout << "Inner Circle Info..." << endl;
        inCircle.ShowCircleInfo();
        cout << "Outter Circle Info..." << endl;
        outCircle.ShowCircleInfo();
    }
};

namespace COMP_POS {
enum { CLERK,
       SENIOR,
       ASSIST,
       MANAGER };
void ShowPositionInfo(int pos) {
    switch (pos) {
        case CLERK:
            cout << "사원" << endl;
            break;
        case SENIOR:
            cout << "주임" << endl;
            break;
        case ASSIST:
            cout << "대리" << endl;
            break;
        case MANAGER:
            cout << "과장" << endl;
    }
}
}  // namespace COMP_POS

class NameCard {
   private:
    char *name;
    char *company;
    char *phone;
    int position;

   public:
    NameCard(const char *myname, const char *mycompany, const char *myphone, int pos)
        : position(pos) {
        name = new char[strlen(myname) + 1];
        company = new char[strlen(mycompany) + 1];
        phone = new char[strlen(myphone) + 1];
        strcpy(name, myname);
        strcpy(company, mycompany);
        strcpy(phone, myphone);
    }

    void ShowNameCardInfo() const {
        cout << "이름: " << name << endl;
        cout << "회사: " << company << endl;
        cout << "전화번호: " << phone << endl;
        cout << "직급: ";
        COMP_POS::ShowPositionInfo(position);
        cout << endl;
    }

    ~NameCard() {
        delete[] name;
        delete[] company;
        delete[] phone;
        cout << "called destructor!" << endl;
    }
};

class FruitSeller {
   private:
    const int ApplePrice;
    int numOfApples;
    int myRevenue;

   public:
    FruitSeller(const int &price, const int &num, const int &revenue)
        : ApplePrice(price) {
        numOfApples = num;
        myRevenue = revenue;
    }

    int SaleApples(int money) {
        if (money < 0) {
            cout << "잘못된 정보가 전달되어 판매를 취소합니다." << endl;
            return 0;
        }
        int num = money / ApplePrice;
        numOfApples -= num;
        myRevenue += money;
        return num;
    }

    void ShowSaleResult() const {
        cout << "남은 사과: " << numOfApples << endl;
        cout << "판매 수익: " << myRevenue << endl
             << endl;
    }
};

class FruitBuyer {
   private:
    int numOfApples;
    int myMoney;

   public:
    FruitBuyer(const int &money)
        : numOfApples(0) {
        myMoney = money;
    }

    void BuyApples(FruitSeller &seller, int money) {
        if (money < 0) {
            cout << "잘못된 정보가 전달되어 구매를 취소합니다." << endl;
        }
        numOfApples += seller.SaleApples(money);
        myMoney -= money;
    }

    void ShowBuyResult() const {
        cout << "현재 잔액: " << myMoney << endl;
        cout << "사과 개수: " << numOfApples << endl
             << endl;
    }
};

class SinivelCap {
   public:
    void Take() const {
        cout << "콧물이 싹~ 납니다." << endl;
    }
};

class SneezeCap {
   public:
    void Take() const {
        cout << "재채기가 멎습니다." << endl;
    }
};

class SnuffleCap {
   public:
    void Take() const {
        cout << "코가 뻥 뚫립니다." << endl;
    }
};

class CONTAC600 {
   private:
    SinivelCap sin;
    SneezeCap sne;
    SnuffleCap snu;

   public:
    void Take() const {
        sin.Take();
        sne.Take();
        snu.Take();
    }
};

class ColdPatient {
   public:
    // void TakeSinivelCap(const SinivelCap &cap) const { cap.Take(); }
    // void TakeSneezeCap(const SneezeCap &cap) const { cap.Take(); }
    // void TakeSnuffleCap(const SnuffleCap &cap) const { cap.Take(); }
    void TakeCONTAC600(const CONTAC600 &cap) const { cap.Take(); }
};

int main(void) {
    // Person ps1("Lee dong gun", 29);
    // Person ps2("Jang dong gun", 41);
    // ps1.ShowPersonInfo();
    // ps2.ShowPersonInfo();

    // Car run99("run99", 100);
    // run99.Accel();
    // run99.Accel();
    // run99.Accel();
    // run99.ShowCarState();
    // run99.Break();
    // run99.ShowCarState();

    // Ring ring(1, 1, 4, 2, 2, 9);
    // ring.ShowRingInfo();

    // NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    // NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    // NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
    // manClerk.ShowNameCardInfo();
    // manSenior.ShowNameCardInfo();
    // manAssist.ShowNameCardInfo();

    // FruitSeller seller(1000, 20, 0);
    // FruitBuyer buyer(5000);
    // buyer.BuyApples(seller, 2000);
    // cout << "과일 판매자의 현황" << endl;
    // seller.ShowSaleResult();
    // cout << "과일 구매자의 현황" << endl;
    // buyer.ShowBuyResult();

    // Rectangle rec(1, 1, 5, 5);
    // rec.ShowRecInfo();

    // SinivelCap scap;
    // SneezeCap zcap;
    // SnuffleCap ncap;
    // ColdPatient cp;
    // cp.TakeSinivelCap(scap);
    // cp.TakeSneezeCap(zcap);
    // cp.TakeSnuffleCap(ncap);
    CONTAC600 cap;
    ColdPatient cp;
    cp.TakeCONTAC600(cap);
    return 0;
}