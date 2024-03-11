#include "library.h"

#include <iostream>
#include <string>
#include <vector>

#include "book.h"
#include "member.h"

using namespace std;

vector<Book> Library::GetBooks() {
    return books_;
}

void Library::SetBooks(vector<Book> books) {
    books_ = books;
}

void Library::AddBook(Book book) {
    books_.push_back(book);
}

void Library::RemoveBook(Book book) {
    for (int i = 0; i < books_.size(); i++) {
        if (books_.at(i).GetIsbn() == book.GetIsbn()) {
            books_.erase(books_.begin() + i);
            return;
        }
    }

    cout << "Book was not foud, so it was not deleted." << endl;
}

void Library::BorrowBook(Member* m, string isbn) {
    for (auto& b : books_) {
        if (b.GetIsbn() == isbn && b.IsAvailable()) {
            b.SetAvailable(false);
            m->BorrowBook();

            return;
        }
    }

    cout << "Book is not available at the moment." << endl;
}

void Library::ReturnBook(Member* m, string isbn) {
    if (m->GetBooksBorrowed() <= 0) {
        m->ReturnBook();
        return;
    }

    for (auto& b : books_) {
        if (b.GetIsbn() == isbn && !b.IsAvailable()) {
            b.SetAvailable(true);
            m->ReturnBook();

            return;
        }
    }

    cout << "Could not find your book in database." << endl;   
}

void Library::DisplayBooks() {
    cout << "Library" << endl;

    for (auto i : books_) {
        i.GetInfo();

        cout << "----------" << endl;
    }
}
