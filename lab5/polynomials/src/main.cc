#include "polynomial.h"

using namespace std;

int main() {
    double arr[] = {1.,2.,3.,4.};
    Polynomial<3> x(arr);
    Polynomial<3> y(arr);
    Polynomial<3> z = x + y;
    Polynomial<3> w = x - y;
    Polynomial<3> t = x * 2;

    print_polynomial(x);
    print_polynomial(y);
    print_polynomial(z);
    print_polynomial(w);
    print_polynomial(t);
    
    cout << x.solve(1) << endl;
    return 0;
}
