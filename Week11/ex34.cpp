#include <iostream>
#include <cstring>
using namespace std;


class Circle {
public:
    int radius;
    Circle(); // 생성자 1 : 기본 생성자
    Circle(int r);  // 생성자 2 : 매개 변수 있는 생성자
    double getArea();
};

Circle::Circle() : Circle(10) {} // 위임 생성자


Circle::Circle(int r) { // 객체 초기화 전담하는 타겟 생성자
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() {
    return 3.14*radius*radius;

}

int main() {
    Circle donut;

    cout <<donut.getArea() << endl;

    Circle pizza(30);
    cout << pizza.getArea() << endl;


}
