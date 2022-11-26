#include <iostream>
#include <cstring>
using namespace std;


class Circle {
public:
    int radius;
    Circle(); // ������ 1 : �⺻ ������
    Circle(int r);  // ������ 2 : �Ű� ���� �ִ� ������
    double getArea();
};

Circle::Circle() : Circle(10) {} // ���� ������


Circle::Circle(int r) { // ��ü �ʱ�ȭ �����ϴ� Ÿ�� ������
    radius = r;
    cout << "������ " << radius << " �� ����" << endl;
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
