#include <iostream>

#include "book.h"
#include "contact.h"

using namespace std;

int main() {
    struct Contact a = { "Nowak", "111222333" };
    struct Contact b = { "Kowalski", "123123123" };
    struct Contact c = { "Kawa", "999888777" };

    Book book;

    book += a;
    book += b;
    book += c;

    book.contacts_sort();
    book.print();

    cout << book.find("Kawa") << endl;
}
