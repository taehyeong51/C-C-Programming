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
