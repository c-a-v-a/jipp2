#include "book.h"

#include <string>

using namespace std;

Book::Book(string title, double price): title_(title), price_(price) {}

string Book::GetTitle() {
    return title_;
}

void Book::SetTitle(string title) {
    title_ = title;
}

double Book::GetPrice() {
    return price_;
}

void Book::SetPrice(double price) {
    price_ = price;
}
