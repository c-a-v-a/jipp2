#include "manager.h"

#include <iostream>

using namespace std;

void Manager::SetSalary(Employee& e, double salary) {
    e.salary_ = salary;
}

Manager::Manager(string name, string surename, unsigned int subordinates,
        double salary):
    Employee(name, surename), subordinates_(subordinates), salary_(salary) {}

unsigned int Manager::GetSubordinates() {
    return subordinates_;
}

void Manager::SetSubordinates(unsigned int subordinates) {
    subordinates_ = subordinates;
}

void Manager::IntroduceYourself() {
    cout << "Hello! My name is " << name_ << " " << surename_ << "." << endl;
    cout << "I am a manager, leading a team of " << subordinates_ << " workers." << endl;
}

void ChangeSalary(Manager& m, Employee& e, double salary) {
    m.SetSalary(e, salary);
}

double GetSalary(Manager& m) {
    return m.salary_;
}
