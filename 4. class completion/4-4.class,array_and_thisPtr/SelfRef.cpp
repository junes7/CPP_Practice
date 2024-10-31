/*
    객체생성
    5
    5
    6
    8
*/
#include <iostream>
using namespace std;

class SelfRef {
   private:
    int num;

   public:
    SelfRef(const int n)
        : num(n) {
        cout << "객체생성" << endl;
    }

    SelfRef& Adder(const int n) {
        num += n;
        return *this;
    }

    SelfRef& ShowTwoNumber() {
        cout << num << endl;
        return *this;
    }
};

int main(void) {
    SelfRef obj(3);
    SelfRef& ref = obj.Adder(2);

    obj.ShowTwoNumber();
    ref.ShowTwoNumber();

    ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
    return 0;
}