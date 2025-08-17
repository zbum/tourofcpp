#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int sum(const vector<int>& v) {
    int sum = 0;
    for (const int i: v) {
        sum += i;
    }
    return sum;
}

void test(vector<int> v1, vector<int>& v2) {
    v1[1] = 99;
    v2[2] = 66;
}

int& bad() { // 반환 값이 스택의 변수를 참조하는 경우 문제가 발생할 수 있다.
    int x = 1;
    return x;
}

int main() {
    vector<int> fib = {1, 2, 3, 5, 8, 13, 21};
    cout << sum(fib) << endl;

    test(fib, fib);
    cout << fib[1] << " " << fib[2] << endl;

    cout << bad() << endl;
    return 0;
}