#include <iostream>

using namespace std;

class Circle {
    int r;
public:
    Circle():Circle(1) {}
    Circle(int r):r(r) {}
    double getArea() {return 3.14*r*r;}
};

int main() {
    Circle donut;
    Circle pizza(30);
    cout <<donut.getArea() << endl;
    cout << pizza.getArea() << endl;
    cout << "-------------" << endl;

    Circle *p = &donut;
    cout << (*p).getArea() << endl;
    cout << p->getArea() << endl;
    cout << "-------------" << endl;

    p = &pizza;
    cout << (*p).getArea() << endl;
    cout << p->getArea() <<endl;
}
