#include <cstring>
#include <iostream>
#include <locale>
using namespace std;

class Person {
   private:
    char *name;
    int age;

   public:
    Person(char *myname, int myage) {
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    }

    Person() {
        name = NULL;
        age = 0;
        cout << "called Person()" << endl;
    }

    void SetPersonInfo(char *myname, int myage) {
        cout << "[" << myname << ", " << myage << "]" << endl;
        name = myname;
        age = myage;
    }

    void ShowPersonInfo() const {
        cout << "이름: " << name << ", 나이: " << age << endl;
    }

    ~Person() {
        delete[] name;
        cout << "called destructor!" << endl;
    }
};

int main(void) {
    Person parr[3];
    char *strptr;
    char namestr[50];
    int age;
    int len;
    for (int i = 0; i < 3; i++) {
        cout << "이름: ";
        // scanf("%s", namestr);
        cin >> namestr;
        cout << "나이: ";
        cin >> age;
        cout << "^^^" << namestr << endl;
        cout << "###" << strptr << endl;
        len = strlen(namestr) + 1;
        strptr = new char[len];
        strcpy(strptr, namestr);

        cout << "$$$" << strptr << endl;
        parr[i].SetPersonInfo(strptr, age);
    }
    for (int i = 0; i < 3; i++) {
        parr[i].ShowPersonInfo();
    }
    return 0;
}
