#include <iostream>

// Ŭ������ ����
class Circle{ // class : class Ű���� �̿��� Ŭ���� ���� ����, Circle : Ŭ���� �̸�
public: // ����� ���� ���� ������
    int radius; // ��� ����

    Circle(); // ������(Constructor), �������� �̸��� Ŭ������ �̸��� �����ϰ� ����ϱ�� ��ӵ�
              // ��ü�� �����Ǵ� �������� �ڵ����� �ѹ� ȣ��,

    Circle(int r); // int Ÿ�� �Ѱ� �ִ� �Ķ���͸� ������ ����
                    // Circle();�� �����ϰ� ������

    double getArea(); // ��� �Լ� ����
}; // Ŭ���� ���� ������ ; �����ݷ� ����

Circle::Circle(){
    radius = 1;
    std::cout << "C()" << std::endl;
}

Circle::Circle(int r){
    radius = r;
    std::cout << "C(int r)" << std::endl;

}
double Circle::getArea() // Circle:: �� ���� Circle Ŭ������ ��� �Լ� ����
{
    std::cout << "Round Area is ";
    return 3.14*radius*radius; // �̶� radius : Circle Ŭ���� ���� �ִ� ���� radius, Ư���� ��ġ ���� ���� ���� (C������ �Ұ����� ���)
} // �Լ� ���� ������ ; �����ݷ� �Ⱥ���

int main()
{
    Circle pizza(5); // �����ڷ� Circle(int r)�� ȣ����
    Circle donut; // �����ڷ� Circle()�� ȣ����

    std::cout << pizza.getArea() << std::endl;
    std::cout << donut.getArea() << std::endl;

    pizza.radius = 10;
    donut.radius = 5;

    std::cout << pizza.getArea() << std::endl;
    std::cout << donut.getArea() << std::endl;
    return 0;
}


