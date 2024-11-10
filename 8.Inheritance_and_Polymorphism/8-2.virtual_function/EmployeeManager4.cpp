#include <cstring>
#include <iostream>
using namespace std;

class Employee {
   private:
    char name[50];

   public:
    Employee(const char *name) {
        strcpy(this->name, name);
    }

    void ShowYourName() const {
        cout << "name: " << name << endl;
    }

    virtual int GetPay() const { return 0; }

    virtual void ShowSalaryInfo() const {
        return;
    }
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
        cout << "salary: " << salary << endl;
    }
};

class TemporaryWorker : public Employee {
   private:
    int workTime;
    int payPerHour;

   public:
    TemporaryWorker(const char *name, const int pay)
        : Employee(name), workTime(0), payPerHour(pay) {}

    void AddWorkTime(int time) {
        workTime += time;
    }

    int GetPay() const { return workTime * payPerHour; }

    void ShowSalaryInfo() const {
        ShowYourName();
        cout << "salary: " << GetPay() << endl;
    }
};

class SalesWorker : public PermanentWorker {
   private:
    int salesResult;
    double bonusratio;

   public:
    SalesWorker(const char *name, const int money, double ratio)
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

class EmployeeHandler {
   private:
    Employee *empList[50];
    int empNum;

   public:
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
    handler.AddEmployee(new PermanentWorker("KIM", 1000));
    handler.AddEmployee(new PermanentWorker("LEE", 1500));

    TemporaryWorker *alba = new TemporaryWorker("Jung", 700);
    alba->AddWorkTime(5);
    handler.AddEmployee(alba);

    SalesWorker *seller = new SalesWorker("Hong", 1000, 0.1);
    seller->AddSalesResult(7000);
    handler.AddEmployee(seller);

    handler.ShowAllSalaryInfo();
    handler.ShowTotalSalary();
    return 0;
}