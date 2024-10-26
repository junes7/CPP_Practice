#include <cstring>
#include <iostream>
using namespace std;

namespace COMP_POS {
enum { CLERK,
       SENIOR,
       ASSIST,
       MANAGER };

void ShowPositionInfo(int pos) {
    switch (pos) {
        case CLERK:
            cout << "사원" << endl;
            break;
        case SENIOR:
            cout << "주임" << endl;
            break;
        case ASSIST:
            cout << "대리" << endl;
            break;
        case MANAGER:
            cout << "과장" << endl;
    }
}
}  // namespace COMP_POS

class NameCard {
   private:
    char *name;
    char *company;
    char *cellphone;
    int position;

   public:
    NameCard(const char *myname, const char *mycompany, const char *mycellphone, int pos)
        : position(pos) {
        name = new char[strlen(myname) + 1];
        company = new char[strlen(mycompany) + 1];
        cellphone = new char[strlen(mycellphone) + 1];
        strcpy(name, myname);
        strcpy(company, mycompany);
        strcpy(cellphone, mycellphone);
    }

    void ShowNameCardInfo() {
        cout << "이름: " << name << endl;
        cout << "회사: " << company << endl;
        cout << "전화번호: " << cellphone << endl;
        cout << "직급: ";
        COMP_POS::ShowPositionInfo(position);
        cout << endl;
    }
};

int main(void) {
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
    manClerk.ShowNameCardInfo();
    manSenior.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();
    return 0;
}