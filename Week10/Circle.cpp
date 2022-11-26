#include "Circle.h"

Circle::Circle():Circle(1){}
Circle::Circle(int r) : r(r) {} // r(r) : 멤버변수r(파라미터 r)


double Circle::getArea() const
{
    return 3.14*r*r;
}

int Circle::getRadius() const {return r;} // getRadius() : 멤버가 선언된 클래스: "Circle"의 멤버
bool Circle::setRadius(int k) { // setRadius() : 멤버가 선언된 클래스 : "Circle"의 멤버
    if (k<1) r = 1;
    return true;
}
