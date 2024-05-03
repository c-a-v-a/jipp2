#include "product_manager.h"

#include <iostream>
#include <fstream>
#include <vector>

#include "exceptions.h"

using namespace std;

void ProductManager::addProduct(Product x) {
    for (auto& product : products_)
        if (product == x)
            throw ProductDuplicateException();

    products_.push_back(x);
}

void ProductManager::removeProduct(int id) {
    for (size_t i = 0; i < products_.size(); i++) {
        if (products_[i].getId() == id) {
            products_.erase(products_.begin() + i);
            return;
        }
    }
    
    throw ProductMissingException();
}

void ProductManager::displayProducts() {
    cout << "=== PRODUCTS ===" << endl;
    for (auto& product : products_) {
        cout << "\t" << product.getId() << ". " << product.getName() << " "
             << product.getPrice() << " (" << typeid(product).name() << ")" 
             << endl;
    }
}

void ProductManager::save(string path) {
    fstream output(path, ios::binary | ios::out);
    for (auto& product : products_) {
        product.writeToBinary(output);
    }

    output.close();
}

void ProductManager::load(string path) {
    long int file_size;
    fstream input(path, ios::binary | ios::in);
    

    input.seekp(0, ios::end);
    file_size = input.tellg();
    input.seekp(0, ios::beg);

    while (input.tellg() < file_size) {
        Product p;
        p.loadFromBinary(input);
        products_.push_back(p);
    }

    input.close();
}
