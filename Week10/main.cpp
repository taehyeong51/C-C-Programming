#include <iostream> 
#include "Circle.h" // 폴더 내 header 추가할 때는 ""

using namespace std;


int main()
{
    const Circle waffle; // 객체도 읽기전용(const)로 만들 수 있음, 하지만 객체는 멤버 함수를 포함, 따라서 멤버 함수들에 const를 붙여 어떤 값을 수정하지 않는다고 보장해야 함
//    waffle.r = 2; // private 멤버라서 안됨
//    waffle.setRadius(-2); // setRadius의 if 문에서 1보다 반지름이 작으므로 r=1이 됨
    cout << waffle.getArea() << endl;
    return 0;
}

