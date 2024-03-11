#ifndef MEMBER_H
#define MEMBER_H

#include <string>

using namespace std;

class Member {
    private:
        string name_;
        unsigned int books_borrowed_;
    public:
        Member(string name);

        string GetName();
        void SetName(string name);

        unsigned int GetBooksBorrowed();
        void SetBooksBorrowed(unsigned int books_borrowed);

        void BorrowBook();
        void ReturnBook();
};

#endif
