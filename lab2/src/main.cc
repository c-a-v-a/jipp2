#include <iostream>

#include "book.h"
#include "member.h"
#include "library.h"

int main() {
    Book b1 = Book("book1", "author", "1");
    Book b2 = Book("book2", "author", "2");
    Book b3 = Book("book3", "author", "3");

    Member m = Member("name");

    Library l = Library();

    l.AddBook(b1);
    l.AddBook(b2);
    l.AddBook(b3);

    l.DisplayBooks();

    cout << "REMOVE BOOK 1" << endl;

    l.RemoveBook(b1);

    l.DisplayBooks();

    cout << "BORROW ALL BOOKS" << endl;

    l.BorrowBook(&m, "1");
    l.BorrowBook(&m, "2");
    l.BorrowBook(&m, "3");

    l.DisplayBooks();

    cout << "REMOVE BOOK 2" << endl;

    l.RemoveBook(b2);

    l.DisplayBooks();

    cout << "RETURN ALL BOOKS" << endl;

    l.ReturnBook(&m, "1");
    l.ReturnBook(&m, "2");
    l.ReturnBook(&m, "3");

    l.DisplayBooks();

    cout << "END" << endl;

    b1.GetInfo();
    b2.GetInfo();
    b3.GetInfo();
}
