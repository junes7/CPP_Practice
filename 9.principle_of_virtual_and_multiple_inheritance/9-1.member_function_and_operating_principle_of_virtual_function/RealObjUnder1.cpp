/*
    Data: 32
*/
#include <cstring>
#include <iostream>
using namespace std;

class Data {
   private:
    int data;

   public:
    Data(int n) : data(n) {}
    void Add(int n) { data += n; }
    void ShowData() const {
        cout << "Data: " << data << endl;
    }
};

int main(void) {
    Data obj(15);
    obj.Add(17);
    obj.ShowData();
    return 0;
}