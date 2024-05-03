#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <fstream>

using namespace std;

class Product {
    private:
        int id_;
        string name_;
        double price_;
    public:
        Product() = default;
        Product(int id, string name, double price);

        int getId();

        string getName();

        double getPrice();

        void writeToBinary(fstream& f);

        void loadFromBinary(fstream& f);

        bool operator==(const Product& x);
};

#endif
