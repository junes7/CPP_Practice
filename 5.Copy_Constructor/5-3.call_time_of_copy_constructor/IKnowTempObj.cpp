#include <iostream>
using namespace std;

class Temporary {
   private:
    int num;

   public:
    Temporary(const int n) : num(n) {
        cout << "create obj: " << num << endl;
    }

    ~Temporary() {
        cout << "destroy obj: " << num << endl;
    }

    void ShowTempInfo() const {
        cout << "My num is " << num << endl;
    }
};

int main(void) {
    Temporary(100);
    cout << "******** after make!" << endl
         << endl;

    Temporary(200).ShowTempInfo();
    cout << "******** after make!" << endl
         << endl;

    const Temporary &ref = Temporary(300);
    cout << "******** end of main!" << endl
         << endl;
    return 0;
}