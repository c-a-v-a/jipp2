#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
    friend class Manager;

    private:
        double salary_;
    protected:
        string name_;
        string surename_;
    public:
        Employee(string name, string surename);
        Employee(double salary, string name, string surename);

        string GetName();
        void SetName(string name);

        string GetSurename();
        void SetSurename(string surename);

        virtual void IntroduceYourself();

        friend double GetSalary(Employee& e);
};

double GetSalary(Employee& e);

#endif
