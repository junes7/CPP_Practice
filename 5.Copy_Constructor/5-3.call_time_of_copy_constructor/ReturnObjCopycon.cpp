#include <cstring>
#include <iostream>
using namespace std;

class SoSimple {
   private:
    int num;

   public:
    SoSimple(const int &n) : num(n) {}
    SoSimple(const SoSimple &copy) : num(copy.num) {
        cout << "Called SoSimple(const SoSimple &copy)" << endl;
    }
    SoSimple &AddNum(const int n) {
        num += n;
        return *this;
    }
    void ShowNum() const { cout << "num: " << num << endl; }
};

SoSimple SimpleFuncObj(SoSimple ob) {
    cout << "return 이전" << endl;
    return ob;
}

int main(void) {
    SoSimple sim1(7);
    SimpleFuncObj(sim1).AddNum(30).ShowNum();
    sim1.ShowNum();
    return 0;
}
