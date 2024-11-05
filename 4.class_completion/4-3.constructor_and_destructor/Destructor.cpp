/*
이름: Lee dong gun
나이: 29
이름: Jang dong gun
나이: 41
*/
#include <cstring>
#include <iostream>
using namespace std;

class Person {
   private:
    char *name;
    int age;

   public:
    Person(const char *myname, int myage) {
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    }

    void ShowPersonInfo() {
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
    Person ps2("Jang dong gun", 41);
    ps1.ShowPersonInfo();
    ps2.ShowPersonInfo();
    return 0;
}