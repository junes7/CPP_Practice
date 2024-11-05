#include <cstring>
#include <iostream>
using namespace std;

class Printer {
   private:
    char prt[50];

   public:
    void SetString(const char *str);
    void ShowString();
};

void Printer::SetString(const char *str) {
    strcpy(prt, str);
}

void Printer::ShowString() {
    cout << prt << endl;
}

int main(void) {
    Printer pnt;
    pnt.SetString("Hello world!");
    pnt.ShowString();

    pnt.SetString("I love C++");
    pnt.ShowString();
    return 0;
}