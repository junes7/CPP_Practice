/*
    Simple class pulic의 Simple함수
    case 1: I'm simple constructor!
    case 2:
    end of main
*/
#include <stdlib.h>

#include <iostream>
using namespace std;

class Simple {
   public:
    Simple() {
        cout << "I'm simple constructor!" << endl;
    }
};

int main(void) {
    cout << "case 1: ";
    Simple *sp1 = new Simple;
    cout << "case 2: ";
    Simple *sp2 = (Simple *)malloc(sizeof(Simple) * 1);
    cout << endl;
    cout << "end of main" << endl;
    delete[] sp1;
    free(sp2);
    return 0;
}