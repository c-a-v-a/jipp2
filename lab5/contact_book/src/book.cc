#include "book.h"

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

#include "contact.h"

using namespace std;

Book& Book::operator+=(struct Contact& x) {
    contacts_.push_back(x);
    return *this;
}

void Book::contacts_sort() {
    sort(contacts_.begin(), contacts_.end(), contact_compare);
}

string Book::find(string name) {
    for (auto & contact : contacts_) {
        if (contact.name == name) return contact.phone;
    }

    return "";
}

void Book::print() {
    for (auto & contact : contacts_)
        cout << "Name: " << contact.name << " Number: " << contact.phone << endl;
}
