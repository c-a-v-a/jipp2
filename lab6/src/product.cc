#include "product.h"

#include <string>

using namespace std;

Product::Product(int id, string name, double price):
    id_(id), name_(name), price_(price) {}

int Product::getId() { return id_; }

string Product::getName() { return name_; }

double Product::getPrice() { return price_; }

bool Product::operator==(const Product& x) {
    return id_ == x.id_;
}

void Product::writeToBinary(fstream& f) {
    size_t name_size = name_.size();

    f.write(reinterpret_cast<char*>(&id_), sizeof(id_));
    f.write(reinterpret_cast<char*>(&name_size), sizeof(name_size));
    f.write(reinterpret_cast<char*>(&name_[0]), name_size);
    f.write(reinterpret_cast<char*>(&price_), sizeof(price_));
}

void Product::loadFromBinary(fstream& f) {
    size_t name_size;
    char* buf;

    f.read(reinterpret_cast<char*>(&id_), sizeof(id_));

    f.read(reinterpret_cast<char*>(&name_size), sizeof(name_size));

    buf = new char[name_size + 1];
    f.read(buf, name_size);
    name_ = buf;
    delete [] buf;

    f.read(reinterpret_cast<char*>(&price_), sizeof(price_));
}
