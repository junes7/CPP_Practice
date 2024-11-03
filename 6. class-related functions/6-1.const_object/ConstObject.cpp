/*
    num: 7
*/
#include <iostream>
using namespace std;

class SoSimple {
   private:
    int num;

   public:
    SoSimple(const int &n) : num(n) {}
    SoSimple &AddNum(const int &n) {
        num += n;
        return *this;
    }
    void ShowSimpleData() const {
        cout << "num: " << num << endl;
    }
};

int main(void) {
    const SoSimple obj(7);
    // obj.AddNum(20);
    obj.ShowSimpleData();

    return 0;
}