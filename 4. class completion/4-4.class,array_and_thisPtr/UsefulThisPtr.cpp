#include <iostream>
using namespace std;

class TwoNumber {
   private:
    int num1;
    int num2;

   public:
    TwoNumber(const int num1, const int num2) {
        this->num1 = num1;
        this->num2 = num2;
    }

    // TwoNumber(const int num1, const int num2)
    // : num1(num1), num2(num2) {
    // }

    void ShowTwoNumberInfo() const {
        cout << num1 << endl;
        cout << num2 << endl;
    }
};

int main(void) {
    TwoNumber two(2, 4);
    two.ShowTwoNumberInfo();
    return 0;
}
