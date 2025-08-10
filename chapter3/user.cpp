#include "Vector.h"
#include <cmath>
#include <iostream>

double sqrt_sum(Vector& v);

int main() {
    Vector v(3);
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    std::cout << sqrt_sum(v) << std::endl;
}

double sqrt_sum(Vector& v) {
    double sum = 0;
    for (int i = 0; i != v.size(); ++i) {
        sum += std::sqrt(v[i]);
    }
    return sum;
}