#include "member.h"

#include <iostream>
#include <string>

using namespace std;

Member::Member(string name) {
    name_ = name;
    books_borrowed_ = 0;
}

string Member::GetName() {
    return name_;
}

void Member::SetName(string name) {
    name_ = name;
}

unsigned int Member::GetBooksBorrowed() {
    return books_borrowed_;
}

void Member::SetBooksBorrowed(unsigned int books_borrowed) {
    books_borrowed_ = books_borrowed;
}

void Member::BorrowBook() {
    books_borrowed_++;
}

void Member::ReturnBook() {
    if (books_borrowed_ <= 0) {
        cout << "Cannot return book, since non are borrowed." << endl;
        return;
    }

    books_borrowed_--;
}
