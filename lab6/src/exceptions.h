#pragma GCC diagnostic ignored "-Wwrite-strings"

#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

using namespace std;

class ProductDuplicateException : public exception {
    public:
        char* what() { 
            return "Product with the same ID already in database.";
        }
};

class ProductMissingException : public exception {
    public:
        char* what() {
            return "Product with this ID does not exist in database.";
        }
};

#endif
