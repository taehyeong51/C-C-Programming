#include <iostream>
#include <cstring>
using namespace std;


class Circle {
public:
    int radius;
    Circle();
    double getArea();
};

Circle::Circle(){
    radius = 1;
    cout << "������(" << radius;
    cout << ") ����" << endl;
}

double Circle::getArea() {
    return 3.14*radius*radius;

}

int main() {
    Circle donut;
    donut.radius = 3;
    cout <<donut.getArea();
}
