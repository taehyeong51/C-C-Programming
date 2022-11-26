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

Circle::Circle(){
    radius = 1; // ������ �� 1�� �ʱ�ȭ
    cout << "������(" << radius;
    cout << ") ����" << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << "������" << radius << "�� ����" << endl;
}

double Circle::getArea() {
    return 3.14*radius*radius;

}

int main() {
    Circle donut;
    donut.radius = 1;
    cout <<donut.getArea() << endl;

    Circle pizza(30);
    cout << pizza.getArea() << endl;


}
