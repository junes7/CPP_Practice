/*
    0
    3
    12
*/
#include <iostream>
using namespace std;

class AAA {
   private:
    int num;

   public:
    AAA() : num(0) {}
    AAA& createInitObj(int n) {
        AAA* ptr = new AAA(n);
        return *ptr;
    }
    void ShowNum() { cout << num << endl; }

   private:
    AAA(int n) : num(n) {}
};

int main(void) {
    AAA base;
    base.ShowNum();

    AAA& ref1 = base.createInitObj(3);
    ref1.ShowNum();

    AAA& ref2 = base.createInitObj(12);
    ref2.ShowNum();

    delete &ref1;
    delete &ref2;
    return 0;
}
