#include "order.h"

#include <vector>
#include <tuple>

using namespace std;

void Order::operator+=(Book& b) {
    for (long unsigned int i = 0; i < books_.size(); i++) {
        if (get<0>(books_.at(i)).GetTitle() == b.GetTitle()) {
            get<1>(books_.at(i)) += 1;
            return;
        }
    }

    books_.push_back(make_tuple(b, 1));
}

vector<tuple<Book, int>> Order::GetBooks() {
    return books_;
}

double calculate_total_price(Order& o) {
    vector<tuple<Book, int>> books = o.GetBooks();
    double price = 0;

    for (long unsigned int i = 0; i < books.size(); i++) {
        price += get<0>(books.at(i)).GetPrice() * get<1>(books.at(i));
    }

    return price;
}

double calculate_total_price(Order& o, bool shipment) {
    if (shipment) {
        return calculate_total_price(o) + 15;
    }

    return calculate_total_price(o);
}
