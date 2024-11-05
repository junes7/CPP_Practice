#include <cstring>
#include <iostream>
using namespace std;

class Person {
   private:
    char *name;
    int age;

   public:
    Person(const char *myname, int myage) {
        name = new char[strlen(myname) + 1];
        strcpy(name, myname);
        age = myage;
        cout << "called Person()" << endl;
    }

    Person(const Person &copy)
        : age(copy.age) {
        name = new char[strlen(copy.name) + 1];
        strcpy(name, copy.name);
        cout << "called Person() from copy" << endl;
    }

    void ShowPersonInfo() const {
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
    }

    ~Person() {
        delete[] name;
        cout << "called destructor!" << endl;
    }
};

int main(void) {
    Person ps1("Lee dong gun", 29);
    Person ps2 = ps1;
    ps1.ShowPersonInfo();
    ps2.ShowPersonInfo();
    return 0;
}