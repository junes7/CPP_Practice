#include <cstring>
#include <iostream>
using namespace std;

class Person {
   private:
    char *name;
    int age;

   public:
    Person(const char *myname, const int myage)
        : age(myage) {
        name = new char[strlen(myname) + 1];
        strcpy(name, myname);
    }

    ~Person() {
        delete[] name;
    }

    void WhatYourName() const {
        cout << "My name is " << name << endl;
    }

    void HowOldAreYou() const {
        cout << "I'm " << age << " years old." << endl;
    }
};

class UnivStudent : public Person {
   private:
    char *major;

   public:
    UnivStudent(const char *myname, const int myage, const char *mymajor)
        : Person(myname, myage) {
        major = new char[strlen(mymajor) + 1];
        strcpy(major, mymajor);
    }

    ~UnivStudent() {
        delete[] major;
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
    UnivStudent ustd2("Yoon", 20, "Electronic eng.");
    ustd2.WhoAreYou();
    UnivStudent ustd3("Kim", 24, "Mathematics.");
    ustd3.WhoAreYou();
    return 0;
}
