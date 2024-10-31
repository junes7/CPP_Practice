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

    void SetPersonInfo(char *myname, int myage) {
        name = myname;
        age = myage;
    }

    void ShowPersonInfo() {
        cout << "이름: " << name << ", ";
        cout << "나이: " << age << endl;
    }

    ~Person() {
        delete[] name;
        cout << "called destructor!" << endl;
    }
};

int main(void) {
    Person *parr[3];
    char namestr[50];
    int age;
    for (int i = 0; i < 3; i++) {
        cout << "이름: ";
        cin >> namestr;
        cout << "나이: ";
        cin >> age;
        parr[i] = new Person(namestr, age);
    }
    for (int i = 0; i < 3; i++) {
        parr[i]->ShowPersonInfo();
    }
    for (int i = 0; i < 3; i++) {
        delete parr[i];
    }
    return 0;
}
