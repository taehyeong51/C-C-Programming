#include <iostream>

class Point {
    int x, y;
public:
    Point();
    Point(int a, int b);
    void show();
};

void Point::show() {
    std::cout << "(" << x << ", ";
    std::cout << y << ")" << std::endl;
}

Point::Point() : Point(0,0) {}

Point::Point(int a, int b) : x(a), y(b) {}

int amin() {
    Point origin;
    Point target(10,20);
    origin.show();
    target.show();
}