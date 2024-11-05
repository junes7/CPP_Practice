#include <iostream>
using namespace std;

class Calculator {
   private:
    int add, min, mul, div;

   public:
    void Init();
    double Add(double n1, double n2);
    double Min(double n1, double n2);
    double Mul(double n1, double n2);
    double Div(double n1, double n2);
    void ShowOpCount();
};

void Calculator::Init() {
    add = 0;
    min = 0;
    mul = 0;
    div = 0;
}

double Calculator::Add(double n1, double n2) {
    add += 1;
    return n1 + n2;
}

double Calculator::Min(double n1, double n2) {
    min += 1;
    return n1 - n2;
}

double Calculator::Mul(double n1, double n2) {
    mul += 1;
    return n1 * n2;
}

double Calculator::Div(double n1, double n2) {
    div += 1;
    return n1 / n2;
}

void Calculator::ShowOpCount() {
    cout << "덧셈: " << add << ' ';
    cout << "뺄셈: " << min << ' ';
    cout << "곱셈: " << mul << ' ';
    cout << "나눗셈: " << div << endl;
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