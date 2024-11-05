#include <cstring>
#include <iostream>
using namespace std;

class Person {
   private:
    char name[50];  // name
    int age;        // age
   public:
    Person(const char *myname, const int myage)
        : age(myage) {
        strcpy(name, myname);
    }

    void WhatYourName() const {
        cout << "My name is " << name << endl;
    }

    void HowOldAreYou() const {
        cout << "I'm " << age << " years old" << endl;
    }
};

class UnivStudent : public Person {
   private:
    char major[50];

   public:
    UnivStudent(const char *myname, const int myage, const char *mymajor)
        : Person(myname, myage) {
        strcpy(major, mymajor);
    }

    void WhoAreYou() const {
        WhatYourName();
        HowOldAreYou();
        cout << "My major is " << major << endl
             << endl;
    }
};

int main(void) {
    UnivStudent ustd1("Lee", 22, "Computer eng.");
    ustd1.WhoAreYou();

    UnivStudent ustd2("Yoon", 21, "Electronic eng.");
    ustd2.WhoAreYou();
    return 0;
}