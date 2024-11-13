#include <cstring>
#include <iostream>
using namespace std;

class Base {
   public:
    Base() { cout << "Base Constructor" << endl; }

    void SimpleFunc() const { cout << "BaseOne" << endl; }
};

class MiddleDerivedOne : virtual public Base {
   public:
    MiddleDerivedOne() : Base() {
        cout << "MiddleDerivedOne Constructor" << endl;
    }

    void MiddleFuncOne() const {
        SimpleFunc();
        cout << "MiddleDerivedOne" << endl;
    }
};

class MiddleDerivedTwo : virtual public Base {
   public:
    MiddleDerivedTwo() : Base() {
        cout << "MiddleDerivedTwo Constructor" << endl;
    }

    void MiddleFuncTwo() const {
        SimpleFunc();
        cout << "MiddleDerivedTwo" << endl;
    }
};

class LastDerived : public MiddleDerivedOne, public MiddleDerivedTwo {
   public:
    LastDerived() : MiddleDerivedOne(), MiddleDerivedTwo() {
        cout << "LastDerived Constructor" << endl;
    }

    void ComplexFunc() const {
        MiddleFuncOne();
        MiddleFuncTwo();
        SimpleFunc();
    }
};

int main(void) {
    cout << "객체생성 전 ....." << endl;
    LastDerived ldr;
    cout << "객체생성 후 ....." << endl;
    ldr.ComplexFunc();
    return 0;
}