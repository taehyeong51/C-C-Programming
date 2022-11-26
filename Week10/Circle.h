#ifndef CIRCLE_H_INCLUDED // 조건부 컴파일, CIRCLE_H_INCLUDED가 정의되어있지 않으면
#define CIRCLE_H_INCLUDED // CIRCLE_H_INCLUDED를 define

class Circle{
private:
//    Circle(); // 생성자를 private으로 하면 생성 안됨

public:
    int r;
    Circle();
    Circle(int r); // Circle pizza(5) 처럼 할 수 있는 생성자를 하나 만들자, Circle 있으면 default 생성자 만들지 않음, 없으면 위 줄에 Circle() 추가해서 C++에서 default 생성자 만들어서 넣어줌
    double getArea() const; // const를 붙여줌
    int getRadius() const;
    bool setRadius(int r);
};

#endif // CIRCLE_H_INCLUDED
