#include <iostream>
using namespace std;

class AAA {
   private:
    int num1;

   public:
    virtual void Func1() const { cout << "Func1" << endl; }

    virtual void Func2() const { cout << "Func2" << endl; }
};

class BBB : public AAA {
   private:
    int num2;

   public:
    virtual void Func1() const { cout << "BBB::Func1" << endl; }

    void Func3() const { cout << "Func3" << endl; }
};

int main(void) {
    AAA *aptr = new AAA();
    BBB *bptr = new BBB();
    aptr->Func1();
    bptr->Func1();
    return 0;
}