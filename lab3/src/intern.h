#ifndef INTERN_H
#define INTERN_H

#include <string>

#include "employee.h"

using namespace std;

class Intern : public Employee {
    public:
        Intern(string name, string surename);

        void IntroduceYourself() override;
};

#endif
