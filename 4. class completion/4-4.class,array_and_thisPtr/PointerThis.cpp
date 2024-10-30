#include <iostream>
using namespace std;

class SoSimple {
   private:
    int num;

   public:
    SoSimple(int n)
        : num(n) {
        cout << "num=" << num << ", ";
        cout << "address=" << this << ' ' << &num << endl;
    }
    void ShowSoSimpleInfo() const {
        cout << num << endl;
    }

    SoSimple *GetThisPointer() {
        return this;
    }
};

int main(void) {
    SoSimple sim1(100);
    SoSimple *ptr1 = sim1.GetThisPointer();
    cout << ptr1 << ", ";
    ptr1->ShowSoSimpleInfo();

    SoSimple sim2(2000);
    SoSimple *ptr2 = sim2.GetThisPointer();
    cout << ptr2 << ", ";
    ptr2->ShowSoSimpleInfo();
    return 0;
}