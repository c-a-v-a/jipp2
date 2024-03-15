#include "intern.h"

#include <iostream>
#include <string>

using namespace std;

Intern::Intern(string name, string surename): Employee(name, surename) {}

void Intern::IntroduceYourself() {
    cout << "Hi! I'm " << name_ << " " << surename_ << "." << endl;
    cout << "I'm an intern at this lovely company. Unpaid of course!" << endl;
}
