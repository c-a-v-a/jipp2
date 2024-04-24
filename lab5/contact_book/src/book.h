#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <vector>

#include "contact.h"

using namespace std;

class Book {
    private:
        vector<struct Contact> contacts_;
    public:
        Book& operator+=(struct Contact& x);

        void contacts_sort();

        string find(string name);

        void print();
};

#endif
