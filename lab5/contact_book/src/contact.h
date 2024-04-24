#ifndef CONTACT_H
#define CONTACT_H

#include <string>

using namespace std;

struct Contact {
    string name;
    string phone;
};

bool contact_compare(struct Contact x, struct Contact y);

#endif
