#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book {
    private:
        string title_;
        double price_;
    public:
        Book(string title, double price);

        string GetTitle();
        void SetTitle(string title);

        double GetPrice();
        void SetPrice(double price);
};

#endif
