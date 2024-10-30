#include <cstring>
#include <iostream>
using namespace std;

class Person {
   private:
    char *name;
    int age;

   public:
    Person(char *myname, int myage) {
        name = new char[strlen(myname) + 1];
        strcpy(name, myname);
        age = myage;
    }

    Person() {
        name = NULL;
        age = 0;
        cout << "called Person()" << endl;
    }

    void ShowPersonInfo() const {
        cout << "이름: " << name << ", ";
        cout << "나이: " << age << endl;
    }

    void SetPersonInfo(char *myname, int myage) {
        name = myname;
        age = myage;
    }

    ~Person() {
        delete[] name;
        cout << "called destructor!" << endl;
    }
};

int main(void) {
    Person parr[3];
    char namestr[50];
    char *nameptr;
    int age;
    for (int i = 0; i < 3; i++) {
        cout << "이름: ";
        cin >> namestr;
        cout << "나이: ";
        cin >> age;
        nameptr = new char[strlen(namestr) + 1];
        strcpy(nameptr, namestr);
        parr[i].SetPersonInfo(nameptr, age);
    }

    for (int i = 0; i < 3; i++) {
        parr[i].ShowPersonInfo();
    }
    return 0;
}