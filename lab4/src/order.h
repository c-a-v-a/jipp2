#ifndef ORDER_H
#define ORDER_H

#include "book.h"

#include <vector>
#include <tuple>

using namespace std;

class Order {
    private:
        vector<tuple<Book, int>> books_;
    public:
        vector<tuple<Book, int>> GetBooks();

        void operator+=(Book& b);
};

double calculate_total_price(Order& o);

double calculate_total_price(Order& o, bool shipment);

#endif
