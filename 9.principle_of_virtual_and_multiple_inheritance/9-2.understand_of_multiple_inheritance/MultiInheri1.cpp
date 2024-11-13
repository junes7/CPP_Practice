#include <cstring>
#include <iostream>
using namespace std;

class BaseOne {
   public:
    void SimpleFuncOne() const {
        cout << "BaseOne" << endl;
    }
};

class BaseTwo {
   public:
    void SimpleFuncTwo() const {
        cout << "BaseTwo" << endl;
    }
};

class MultiDerived : public BaseOne, protected BaseTwo {
   public:
    void ComplexFunc() const {
        SimpleFuncOne();
        SimpleFuncTwo();
    }
};

int main(void) {
    MultiDerived mdr;
    mdr.ComplexFunc();
    return 0;
}