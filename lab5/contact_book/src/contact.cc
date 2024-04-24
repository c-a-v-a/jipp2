#include "contact.h"

using namespace std;

bool contact_compare(struct Contact x, struct Contact y) {
    size_t min_size = min(x.name.length(), y.name.length());

    for (size_t i = 0; i < min_size; i++) {
        if (x.name[i] == y.name[i]) continue;

        return x.name[i] < y.name[i];
    }

    return x.name.length() < y.name.length();
}
