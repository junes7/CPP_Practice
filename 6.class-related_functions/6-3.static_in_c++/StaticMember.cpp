#include <iostream>
using namespace std;

class SoSimple {
   private:
    static int simObjCnt;

   public:
    SoSimple() {
        simObjCnt++;
        cout << simObjCnt << "번째 SoSimple 객체" << endl;
    }
};

int SoSimple::simObjCnt = 0;

class SoComplex {
   private:
    static int cmxObjCnt;

   public:
    SoComplex() {
        cmxObjCnt++;
        cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
    }
    SoComplex(const SoComplex &copy) {
        cmxObjCnt++;
        cout << cmxObjCnt << "번째 SoComplex 객체 from copy" << endl;
    }
};

int SoComplex::cmxObjCnt = 0;

int main(void) {
    SoSimple obj1;
    SoSimple obj2;

    SoComplex com1;
    SoComplex com2 = com1;
    SoComplex();
    return 0;
}