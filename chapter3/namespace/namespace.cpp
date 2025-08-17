#include <iostream>

namespace My_code {
    class complex {
        double re, im;
    public:
        complex(double r, double i) : re{r}, im{i} {}
        complex(double r) : re{r}, im{0} {}
        complex() : re{0}, im{0} {}

        double real() const { return re; }
        void real(double d) { re = d; }
        double imag() const { return im; }
        void imag(double d) { im = d; }

        complex(const complex&) = default;
        complex(complex&&) = default;
        
    };

    complex sqrt(complex z) {
        return complex(std::sqrt(z.real()), std::sqrt(z.imag()));
    }

    int main();
}

int My_code::main() {
    complex z {1,2};
    auto z2 = sqrt(z);
    std::cout << '{' << z2.real() << ',' << z2.imag() << "}\n";
    return 0;
}

int main() {
    return My_code::main();
}