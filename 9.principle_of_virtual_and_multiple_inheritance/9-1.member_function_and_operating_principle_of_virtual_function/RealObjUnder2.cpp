#include <cstring>
#include <iostream>
using namespace std;

typedef struct Data {
    int data;
    void (*Add)(Data*, int);
    void (*ShowData)(Data*);
} Data;

void Add(Data* THIS, int n) { THIS->data += n; }
void ShowData(Data* THIS) { cout << "Data: " << THIS->data << endl; }

int main(void) {
    Data obj1 = {15, Add, ShowData};
    Data obj2 = {7, Add, ShowData};
    obj1.Add(&obj1, 17);
    obj2.Add(&obj2, 9);
    obj1.ShowData(&obj1);
    obj2.ShowData(&obj2);
    return 0;
}