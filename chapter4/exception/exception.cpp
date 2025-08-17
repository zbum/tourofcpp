#include <iostream>
#include <vector>
#include <stdexcept>

using std::cout;
using std::endl;
using std::cerr;
using std::out_of_range;
using std::vector;

void f(vector<int>& v) {
    try {
        v.at(100) = 7;
    } catch (const out_of_range& e) {
        cerr << "out of range: " << e.what() << endl;
    }
}

int main() {
    vector<int> v(3);
    v[0] = 1;
    f(v);
    return 0;
}