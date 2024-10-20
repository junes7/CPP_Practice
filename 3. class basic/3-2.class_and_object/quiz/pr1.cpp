#include <iostream>
using namespace std;

class Calculator {
   private:
    int add, min, mul, div;

   public:
    void Init();
    double Add(float f1, float f2);
    double Min(float f1, float f2);
    double Mul(float f1, float f2);
    double Div(float f1, float f2);
    void ShowOpCount();
};

void Calculator::Init() {
    add = 0;
    min = 0;
    mul = 0;
    div = 0;
}

double Calculator::Add(float f1, float f2) {
    add += 1;
    return f1 + f2;
}

double Calculator::Min(float f1, float f2) {
    min += 1;
    return f1 - f2;
}

double Calculator::Mul(float f1, float f2) {
    mul += 1;
    return f1 * f2;
}

double Calculator::Div(float f1, float f2) {
    div += 1;
    return f1 / f2;
}

void Calculator::ShowOpCount() {
    cout << "덧셈: " << add << " 뺄셈: " << min << " 곱셈: " << mul << " 나눗셈: " << div << endl;
}

int main(void) {
    Calculator cal;
    cal.Init();
    cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
    cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
    cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
    cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
    cal.ShowOpCount();
    return 0;
}