#ifndef PRODUCT_MANAGER_H
#define PRODUCT_MANAGER_H

#include <vector>

#include "product.h"

using namespace std;

class ProductManager {
    private:
        vector<Product> products_;
    public:
        void addProduct(Product x);

        void removeProduct(int id);

        void displayProducts();

        void save(string path);

        void load(string path);
};

#endif
