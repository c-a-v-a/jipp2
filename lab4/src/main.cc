#include <iostream>

#include "book.h"
#include "order.h"

using namespace std;

int main() {
    Book b1("b1", 10);
    Book b2("b2", 15);
    Book b3("b3", 40);

    Order o;

    o += b1;
    o += b1;
    o += b1;
    o += b2;
    o += b2;
    o += b3;

    cout << calculate_total_price(o) << endl;
    cout << calculate_total_price(o, false) << endl;
    cout << calculate_total_price(o, true) << endl;
}
