#ifndef MANAGER_H
#define MANAGER_H

#include <string>

#include "employee.h"

using namespace std;

class Manager : public Employee {
    private:
        unsigned int subordinates_;
        double salary_;

        void SetSalary(Employee& e, double salary);
    public:
        Manager(string name, string surename, unsigned int subordinates, 
                double salary);

        unsigned int GetSubordinates();
        void SetSubordinates(unsigned int subordinates);

        void IntroduceYourself() override;

        friend void ChangeSalary(Manager& m, Employee& e, double salary);

        friend double GetSalary(Manager& m);
};

void ChangeSalary(Manager& m, Employee& e, double salary);

double GetSalary(Manager& m);

#endif
