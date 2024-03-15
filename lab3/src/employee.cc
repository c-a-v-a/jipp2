#include "employee.h"

#include <iostream>
#include <string>

using namespace std;

Employee::Employee(string name, string surename) {
    name_ = name;
    surename_ = surename;
}

Employee::Employee(double salary, string name, string surename):
    salary_(salary), name_(name), surename_(surename) {}

string Employee::GetName() {
    return name_;
}

void Employee::SetName(string name) {
    name_ = name;
}

string Employee::GetSurename() {
    return surename_;
}

void Employee::SetSurename(string surename) {
    surename_ = surename;
}

void Employee::IntroduceYourself() {
    cout << "Hello! My name is " << name_ << " " << surename_ << "." << endl;
}

double GetSalary(Employee& e) {
    return e.salary_;
}
