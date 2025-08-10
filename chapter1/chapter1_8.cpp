#include <iostream>
#include <cctype>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// 상수 정의
const double SCALE_FACTOR = 1.0;

// Point 구조체 정의
struct Point {
    double x, y;
    Point(double x = 0, double y = 0) : x(x), y(y) {}
    
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }
    
    Point operator*(double factor) const {
        return Point(x * factor, y * factor);
    }
};

// 전역 변수
Point current{0, 0};

// 함수 프로토타입
bool accept();
bool accept2();
void action();
void move(const Point& p);
void update_display();
double scale(double value = SCALE_FACTOR);

int main() {
    if (accept()) {
        cout << "hello" << endl;
    } else {
        cout << "Goodbye!" << endl;
    }
    if (accept2()) {
        cout << "hello" << endl;
    } else {
        cout << "Goodbye!" << endl;
    }
    
    cout << "\n=== Starting Action Function ===\n";
    action();
    
    return 0;
}

bool accept() {
    cout << "Do you want to proceed? (y/n): ";
    char answer = 0;
    cin >> answer;
    if (tolower(answer) == 'y') return true;
    return false;
}

bool accept2() {
    cout << "Do you want to proceed? (y/n): ";
    char answer = 0;
    cin >> answer;
    switch (tolower(answer)) {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "I'll take that for a no." << endl;
            return false;
    }
}

// move 함수 구현
void move(const Point& p) {
    current = p;
    cout << "Moved to position: (" << current.x << ", " << current.y << ")" << endl;
}

// update_display 함수 구현
void update_display() {
    cout << "Display updated at position: (" << current.x << ", " << current.y << ")" << endl;
}

// scale 함수 구현
double scale(double value) {
    return value * SCALE_FACTOR;
}

void action() {
    while (true) {
        cout << "Enter action: \n";
        string act;
        cin >> act;
        Point delta {0,0};

        for (char ch : act) {
            switch (ch) {
                case 'u':
                case 'n':
                    ++delta.y;
                    break;
                case 'r':
                case 'e':
                    ++delta.x;
                    break;
                default:
                    cout << "I freeze!\n";
            }
            move(current+delta*scale(1.0));
            update_display();
        }
    }
}