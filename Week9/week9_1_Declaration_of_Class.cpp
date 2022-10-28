//#include <iostream>
//
//// 클래스의 선언
//class Circle{ // class : class 키워드 이용해 클래스 선언 시작, Circle : 클래스 이름
//public: // 멤버에 대한 접근 지정자
//    int radius; // 멤버 변수
//    double getArea(); // 멤버 함수 선언
//}; // 클래스 선언 끝에는 ; 세미콜론 붙음
//
///* 일반함수라면 다음과 같은 코드를 통해 면적 구함
//double getArea(int radius)
//{
//    return 3.14*radius*radius;
//}
//*/
//
//// Circle Class에 있는 getArea() 함수를 구현하기 위해서는 다음과 같이 코드 구현
//double Circle::getArea() // Circle:: 를 통해 Circle 클래스의 멤버 함수 구현
//{
//    std::cout << "Round Area is ";
//    return 3.14*radius*radius; // 이때 radius : Circle 클래스 내에 있는 변수 radius, 특별한 조치 없이 접근 가능 (C에서는 불가능한 기능)
//} // 함수 정의 끝에는 ; 세미콜론 안붙음
//
//int main()
//{
//    Circle pizza;
//    pizza.radius = 10;
//
//    Circle donut;
//    donut.radius = 5;
//
//    std::cout << pizza.getArea() << std::endl;
//    std::cout << donut.getArea() << std::endl;
//    return 0;
//}
#include <iostream>

class Rectangle {
public:
    int width;
    int height;
    int getArea();
};

int Rectangle::getArea() {
    int area = width * height;
    return area;
}

int main()
{
    Rectangle rect;

    rect.width = 3;
    rect.height = 5;

    std:: cout << "Area of Square is " << rect.getArea() << std::endl;
}
