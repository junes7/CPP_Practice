#include <cstring>
#include <iostream>
using namespace std;

class SoSimple {
   private:
    int num;

   public:
    SoSimple(const int &n) : num(n) {
        cout << "New Object: " << this << endl;
    }

    SoSimple(const SoSimple &copy) : num(copy.num) {
        cout << "New Copy Obj: " << this << endl;
    }

    ~SoSimple() {
        cout << "Destroy Obj: " << this << endl;
    }
};

SoSimple SimpleFuncObj(SoSimple ob) {
    cout << "Parm ADR: " << &ob << endl;
    return ob;
}

int main(void) {
    SoSimple obj(7);
    SimpleFuncObj(obj);

    cout << endl;
    SoSimple tempref = SimpleFuncObj(obj);
    cout << "Return Obj " << &tempref << endl;
    return 0;
}