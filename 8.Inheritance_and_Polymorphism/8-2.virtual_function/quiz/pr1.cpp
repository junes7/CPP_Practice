#include <cstring>
#include <iostream>
using namespace std;

namespace RISK_LEVEL {
enum { RISK_A = 30,
       RISK_B = 20,
       RISK_C = 10 };
}  // namespace RISK_LEVEL

class Employee {
   private:
    char name[50];

   public:
    Employee(const char *myname) {
        strcpy(name, myname);
    }

    void ShowYourName() const {
        cout << "name: " << name << endl;
    }

    virtual int GetPay() const { return 0; }

    virtual void ShowSalaryInfo() const {}

    virtual ~Employee() {}
};

class PermanentWorker : public Employee {
   private:
    int salary;

   public:
    PermanentWorker(const char *name, const int money)
        : Employee(name), salary(money) {}

    int GetPay() const { return salary; }

    void ShowSalaryInfo() const {
        ShowYourName();
        cout << "salary: " << GetPay() << endl;
    }
};

class TemporaryWorker : public Employee {
   private:
    int workTime;
    int payPerHour;

   public:
    TemporaryWorker(const char *name, const int pay)
        : Employee(name), workTime(0), payPerHour(pay) {}

    void AddWorTime(int time) {
        workTime += time;
    }

    int GetPay() const { return workTime * payPerHour; }

    void ShowSalayrInfo() const {
        ShowYourName();
        cout << "salary: " << GetPay() << endl;
    }
};

class SalesWorker : public PermanentWorker {
   private:
    int salesResult;
    double bonusratio;

   public:
    SalesWorker(const char *name, const int money, const double ratio)
        : PermanentWorker(name, money), salesResult(0), bonusratio(ratio) {}

    void AddSalesResult(int sales) {
        salesResult += sales;
    }

    int GetPay() const { return PermanentWorker::GetPay() + (int)salesResult * bonusratio; }

    void ShowSalaryInfo() const {
        ShowYourName();
        cout << "salary: " << GetPay() << endl;
    }
};

class ForeignSalesWorker : public SalesWorker {
   private:
    int riskLevel;

   public:
    ForeignSalesWorker(const char *name, const int money, const double ratio, const int level)
        : SalesWorker(name, money, ratio), riskLevel(level) {}

    int GetRiskPay() const { return (int)SalesWorker::GetPay() * riskLevel / 100; }

    int GetPay() const { return SalesWorker::GetPay() + GetRiskPay(); }

    void ShowSalaryInfo() const {
        ShowYourName();
        cout << "salary: " << SalesWorker::GetPay() << endl;
        cout << "risk pay: " << GetRiskPay() << endl;
        cout << "sum: " << GetPay() << endl
             << endl;
    }
};

class EmployeeHandler {
   private:
    Employee *empList[50];
    int empNum;

   public:
    EmployeeHandler() : empNum(0) {}

    void AddEmployee(Employee *emp) {
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
    EmployeeHandler handler;

    ForeignSalesWorker *fseller1 = new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
    fseller1->AddSalesResult(7000);
    handler.AddEmployee(fseller1);

    ForeignSalesWorker *fseller2 = new ForeignSalesWorker("Yoon", 1000, 0.1, RISK_LEVEL::RISK_B);
    fseller2->AddSalesResult(7000);
    handler.AddEmployee(fseller2);

    ForeignSalesWorker *fseller3 = new ForeignSalesWorker("Lee", 1000, 0.1, RISK_LEVEL::RISK_C);
    fseller3->AddSalesResult(7000);
    handler.AddEmployee(fseller3);

    handler.ShowAllSalaryInfo();

    return 0;
}
