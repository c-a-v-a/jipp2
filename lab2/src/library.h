#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <vector>

#include "book.h"
#include "member.h"

using namespace std;

class Library {
    private:
        vector<Book> books_;
    public:
        vector<Book> GetBooks();
        void SetBooks(vector<Book> books);

        void AddBook(Book book);
        void RemoveBook(Book book);

        void BorrowBook(Member* m, string isbn);
        void ReturnBook(Member* m, string isbn);

        void DisplayBooks();
};

#endif
