#include <iostream>

#include "product.h"
#include "product_manager.h"
#include "exceptions.h"

int main() {
    ProductManager manager;
    ProductManager manager2;
    struct Product a = { 0, "A", 9.99 };
    struct Product b = { 1, "B", 3.99 };
    struct Product c = { 2, "C", 20 };

    try {
        manager.addProduct(a);
        manager.addProduct(b);
        manager.addProduct(c);
        manager.addProduct(a);
    } catch (ProductDuplicateException& e) {
        cout << "Error. " << e.what() << endl;
    }

    manager.displayProducts();

    try {
        manager.removeProduct(0);
        manager.removeProduct(0);
    } catch(ProductMissingException& e) {
        cout << "Error. " << e.what() << endl;
    }

    manager.displayProducts();
    manager.save("output.bin");

    manager2.load("output.bin");
    manager2.displayProducts();
}
