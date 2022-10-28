#include <iostream>

class Circle{
public:
    int r;
    int x;
    int y;

    Circle();
    Circle(int r);


    double getArea();
};

Circle::Circle():Circle(1) {} // ���� ������, int type parameter 1�� �ִ� ���������� ����


Circle::Circle(int r):r(r), x(1), y(1){ // ������� �ʱ�ȭ
    std::cout << "C(int r)" << std::endl;

}

double Circle::getArea()
{
    std::cout << "Round Area is ";
    return 3.14*r*r;
}

int main()
{
    Circle pizza(5);
//    Circle donut;

    std::cout << pizza.getArea() << std::endl;
//    std::cout << donut.getArea() << std::endl;

    pizza.r = 10;
//    donut.radius = 5;

    std::cout << pizza.getArea() << std::endl;
//    std::cout << donut.getArea() << std::endl;
    return 0;
}
