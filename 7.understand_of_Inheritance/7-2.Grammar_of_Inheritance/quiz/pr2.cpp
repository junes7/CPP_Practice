/*
이름: 이진성
나이: 22
주소: 충남 아산
전화: 010-1111-2222

이름: 김주성
나이: 25
주소: 경기 이천
전화: 010-3333-4444
*/
#include <cstring>
#include <iostream>
using namespace std;

class MyFriendInfo {
   private:
    char *name;
    int age;

   public:
    MyFriendInfo(const char *fname, const int fage)
        : age(fage) {
        name = new char[strlen(fname) + 1];
        strcpy(name, fname);
    }

    void ShowMyFriendInfo() const {
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
    }

    ~MyFriendInfo() {
        delete[] name;
    }
};

class MyFriendDetailInfo : public MyFriendInfo {
   private:
    char *addr;
    char *phone;

   public:
    MyFriendDetailInfo(const char *fname, const int fage, const char *faddr, const char *fphone)
        : MyFriendInfo(fname, fage) {
        addr = new char[strlen(faddr) + 1];
        phone = new char[strlen(fphone) + 1];
        strcpy(addr, faddr);
        strcpy(phone, fphone);
    }

    void ShowMyFriendDetailInfo() const {
        ShowMyFriendInfo();
        cout << "주소: " << addr << endl;
        cout << "전화: " << phone << endl
             << endl;
    }

    ~MyFriendDetailInfo() {
        delete[] addr;
        delete[] phone;
    }
};

int main(void) {
    MyFriendDetailInfo fren1("이진성", 22, "충남 아산", "010-1111-2222");
    MyFriendDetailInfo fren2("김주성", 25, "경기 이천", "010-3333-4444");
    fren1.ShowMyFriendDetailInfo();
    fren2.ShowMyFriendDetailInfo();
    return 0;
}