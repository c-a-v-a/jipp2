#include <iostream>

#include "employee.h"
#include "intern.h"
#include "manager.h"

using namespace std;

int main() {
    Employee e(2500, "Jan", "Kowalski");
    Intern i("Marek", "Nowak");
    Manager m("Adam", "Kawa", 10, 7000);

    // change employee
    e.SetName("Janusz");
    e.SetSurename("Nowak");

    // change intern
    i.SetName("Jan");
    i.SetSurename("Kowalski");
    
    // change manager
    m.SetName("Marek");
    m.SetSurename("Kot");
    m.SetSubordinates(7);

    cout << "Employee info" << endl;
    cout << "Name: " << e.GetName() << endl;
    cout << "Surename: " << e.GetSurename() << endl;
    cout << "Salary: " << GetSalary(e) << endl;

    ChangeSalary(m, e, 3000);

    cout << "After raise: " << GetSalary(e) << endl;

    cout << endl << "Intern info" << endl;
    cout << "Name: " << i.GetName() << endl;
    cout << "Surename: " << i.GetSurename() << endl;

    cout << endl << "Manager info" << endl;
    cout << "Name: " << m.GetName() << endl;
    cout << "Surename: " << m.GetSurename() << endl;
    cout << "Salary: " << GetSalary(m) << endl;
    cout << "Number of subordinates: " << m.GetSubordinates() << endl;

    cout << endl << "Introductions" << endl;
    e.IntroduceYourself();
    cout << endl;
    i.IntroduceYourself();
    cout << endl;
    m.IntroduceYourself();
    return 0;
}

/* OUTPUT
Employee info
Name: Janusz
Surename: Nowak
Salary: 2500
After raise: 3000

Intern info
Name: Jan
Surename: Kowalski

Manager info
Name: Marek
Surename: Kot
Salary: 7000
Number of subordinates: 7

Introductions
Hello! My name is Janusz Nowak.

Hi! I'm Jan Kowalski.
I'm an intern at this lovely company. Unpaid of course!

Hello! My name is Marek Kot.
I am a manager, leading a team of 7 workers.
*/
