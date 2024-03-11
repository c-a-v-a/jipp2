#include "book.h"

#include <iostream>
#include <string>

using namespace std;

Book::Book(string title, string author, string isbn): 
    title_(title), author_(author), isbn_(isbn), available_(true) {}

Book::~Book() {
    cout << "Destroying a book..." << endl;
}

string Book::GetTitle() {
    return title_;
}

void Book::SetTitle(string title) {
    title_ = title;
}

string Book::GetAuthor() {
    return author_;
}

void Book::SetAuthor(string author) {
    author_ = author;
}

string Book::GetIsbn() {
    return isbn_;
}

void Book::SetIsbn(string isbn) {
    isbn_ = isbn;
}

bool Book::IsAvailable() {
    return available_;
}

void Book::SetAvailable(bool available) {
    available_ = available;
}

void Book::GetInfo() {
    cout << "Title: " << title_ << " Author: " << author_  << endl;
    cout << "Isbn: " << isbn_ << endl;
    cout << "Available: " << available_ << endl;
}
