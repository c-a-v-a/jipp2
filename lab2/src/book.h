#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book {
    private:
        string title_;
        string author_;
        string isbn_;
        bool available_;
    public:
        Book(string title, string author, string isbn);
        ~Book();

        string GetTitle();
        void SetTitle(string title);

        string GetAuthor();
        void SetAuthor(string author);

        string GetIsbn();
        void SetIsbn(string isbn);

        bool IsAvailable();
        void SetAvailable(bool available);

        void GetInfo();
};

#endif
