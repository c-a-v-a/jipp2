#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <cmath>
#include <iostream>
#include <string>

using namespace std;

template<size_t Degree>
class Polynomial {
    private:
        double coefficients_[Degree + 1];
    public:
        Polynomial();

        Polynomial(const double (&coefficients)[Degree + 1]) {
            for (size_t i = 0; i < Degree + 1; i++)
                coefficients_[i] = coefficients[i];
        }

        double* getCoefficients() {
            return coefficients_;
        }

        template <size_t ODegree>
        Polynomial operator+(const Polynomial<ODegree>& x) {
            if (Degree > ODegree) {
                double result[Degree + 1];

                for (size_t i = 0; i <= Degree; i++) {
                    result[Degree - i] = coefficients_[Degree - i];

                    if (i <= ODegree)
                        result[Degree - i] += x.coefficients_[ODegree - i];
                }

                return Polynomial<Degree>(result);
            } else {
                double result[ODegree + 1];

                for (size_t i = 0; i <= ODegree; i++) {
                    result[ODegree - i] = x.coefficients_[ODegree - i];

                    if (i <= Degree)
                        result[ODegree - i] += coefficients_[Degree - i];
                }

                return Polynomial<ODegree>(result);
            }
        }

        template <size_t ODegree>
        Polynomial operator-(const Polynomial<ODegree>& x) {
            if (Degree > ODegree) {
                double result[Degree + 1];

                for (size_t i = 0; i <= Degree; i++) {
                    result[Degree - i] = coefficients_[Degree - i];

                    if (i <= ODegree)
                        result[Degree - i] -= x.coefficients_[ODegree - i];
                }

                return Polynomial<Degree>(result);
            } else {
                double result[ODegree + 1];

                for (size_t i = 0; i <= ODegree; i++) {
                    result[ODegree - i] = -1 * x.coefficients_[ODegree - i];

                    if (i <= Degree)
                        result[ODegree - i] += coefficients_[Degree - i];
                }

                return Polynomial<ODegree>(result);
            }
        }

        Polynomial operator*(double x) {
            double result[Degree + 1];

            for (size_t i = 0; i <= Degree; i++)
                result[i] = x * coefficients_[i];

            return Polynomial<Degree>(result);
        }

        double solve(double x) {
            double result = 0;

            for (size_t i = 0; i <= Degree; i++) {
                result += coefficients_[Degree - i] * pow(x, Degree - i);                
            }

            return result;
        }
};

template <size_t Degree>
void print_polynomial(Polynomial<Degree> x) {
    string result;
    double* coefficients = x.getCoefficients();

    for (size_t i = 0; i < Degree; i++) {
        if (coefficients[i] == 0) continue;

        result += to_string(abs(coefficients[i]));
        result += "x^";
        result += to_string(Degree - i);

        if (coefficients[i + 1] > 0) {
            result += " + ";
        } else {
            result += " - ";
        }
    }

    result += to_string(abs(coefficients[Degree]));

    cout << result << endl;
}

#endif
