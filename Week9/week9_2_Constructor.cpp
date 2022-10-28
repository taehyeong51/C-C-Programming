#include <iostream>

// 클래스의 선언
class Circle{ // class : class 키워드 이용해 클래스 선언 시작, Circle : 클래스 이름
public: // 멤버에 대한 접근 지정자
    int radius; // 멤버 변수

    Circle(); // 생성자(Constructor), 생성자의 이름은 클래스의 이름과 동일하게 사용하기로 약속됨
              // 객체가 생성되는 시점에서 자동으로 한번 호출,

    Circle(int r); // int 타입 한개 있는 파라미터를 가지고 있음
                    // Circle();와 동일하게 생성자

    double getArea(); // 멤버 함수 선언
}; // 클래스 선언 끝에는 ; 세미콜론 붙음

Circle::Circle(){
    radius = 1;
    std::cout << "C()" << std::endl;
}

Circle::Circle(int r){
    radius = r;
    std::cout << "C(int r)" << std::endl;

}
double Circle::getArea() // Circle:: 를 통해 Circle 클래스의 멤버 함수 구현
{
    std::cout << "Round Area is ";
    return 3.14*radius*radius; // 이때 radius : Circle 클래스 내에 있는 변수 radius, 특별한 조치 없이 접근 가능 (C에서는 불가능한 기능)
} // 함수 정의 끝에는 ; 세미콜론 안붙음

int main()
{
    Circle pizza(5); // 생성자로 Circle(int r)을 호출함
    Circle donut; // 생성자로 Circle()를 호출함

    std::cout << pizza.getArea() << std::endl;
    std::cout << donut.getArea() << std::endl;

    pizza.radius = 10;
    donut.radius = 5;

    std::cout << pizza.getArea() << std::endl;
    std::cout << donut.getArea() << std::endl;
    return 0;
}


