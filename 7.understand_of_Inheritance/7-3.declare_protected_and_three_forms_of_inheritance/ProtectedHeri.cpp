#include <iostream>
using namespace std;

class Base {
   private:
    int num1;

   protected:
    int num2;

   public:
    int num3;

    Base() : num1(1), num2(2), num3(3) {}
};

// class Derived : protected Base {};
// 오류 해결과 num3 접근 위해 protected 상속을 public 상속으로 변경
class Derived : public Base {};

int main(void) {
    Derived drv;
    cout << drv.num3 << endl;
}
/*
이 클래스 변수에 접근할 수 없다고 에러 발생
ProtectedHeri.cpp:21:17: error: 'int Base::num3' is inaccessible within this context
   21 |     cout << drv.num3 << endl;
      |                 ^~~~
ProtectedHeri.cpp:12:9: note: declared here
   12 |     int num3;
      |         ^~~~
*/