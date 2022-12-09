#include <iostream>

using namespace std;

void swap(int &rx, int &ry) // int &rx = x, int &ry = y의 방식으로 x,y에 다른 이름인 rx와 ry를 만들어줌
                              // x와 rx는 같은 메모리 주소를, y와 ry는 같은 메모리 주소를 갖게 됨
{
    int t = rx;
    rx = ry; // 메모리 주소를 통해 값 변경
    ry = t; // 메모리 주소를 통해 값 변경
    // 함수 종료와 동시에 참조자 형태로 이름이 주어진 rx,ry는 소멸됨
}

int main()
{
    int x = 10, y = 20;
    cout << " x:" << x << " y:" << y << endl;
    swap(x,y);
    cout << " x:" << x << " y:" << y << endl;
    return 0;
}
