#include <cstring>
#include <iostream>
using namespace std;

class PermanentWorker {
   private:
    // char *name;
    char name[50];
    int salary;

   public:
    PermanentWorker(const char *myname, const int money)
        : salary(money) {
        // name = new char[strlen(myname)];
        strcpy(name, myname);
    }

    int GetPay() const { return salary; }

    void ShowSalaryInfo() const {
        cout << "name: " << name << endl;
        cout << "salary: " << salary << endl
             << endl;
    }

    // ~PermanentWorker() {
    //     delete[] name;
    // }
};

class EmployeeHandler {
   private:
    int empNum;
    PermanentWorker *empList[50];

   public:
    EmployeeHandler() : empNum(0) {}
    void AddEmployee(PermanentWorker *emp) {
        empList[empNum++] = emp;
    }
    void ShowAllSalaryInfo() const {
        for (int i = 0; i < empNum; i++) {
            empList[i]->ShowSalaryInfo();
        }
    }
    void ShowTotalSalary() const {
        int sum = 0;
        for (int i = 0; i < empNum; i++) {
            sum += empList[i]->GetPay();
        }
        cout << "salary sum: " << sum << endl;
    }
    ~EmployeeHandler() {
        for (int i = 0; i < empNum; i++) {
            delete empList[i];
        }
    }
};

int main(void) {
    // 직원관리 목적 콘트롤 클래스의 객체생성
    EmployeeHandler handler;
    // 직원 등록
    handler.AddEmployee(new PermanentWorker("KIM", 1000));
    handler.AddEmployee(new PermanentWorker("LEE", 1500));
    handler.AddEmployee(new PermanentWorker("JUN", 2000));
    // 이번 달에 지불해야 할 급여 정보
    handler.ShowAllSalaryInfo();
    // 이번 달에 지불해야 할 급여 총합
    handler.ShowTotalSalary();
    return 0;
}