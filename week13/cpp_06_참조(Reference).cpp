#include <iostream>

using namespace std;

// 참조자는 할당된 하나의 메모리 공간에 다른 이름을 붙이는 것

int main() {
    int x = 1;
    int *p = &x;
    int &r = x; // 변수x의 별명 변수 r을 만들고 x와 r은 같은 값을 가짐
    cout << x << ", " << &x << endl;
    cout << p << ", " << &p << ", " << *p << endl;
    cout << r << ", " << &r << endl;
    cout << "----------" << endl;
    x++; // x 값을 직접 증가
    cout << x << ", " << *p << ", " << r << endl;
    (*p)++; // x의 주소값이 저장된 주소 변수 p를 인다이렉트하여 값 증가
    cout << x << ", " << *p << ", " << r << endl;
    r++; // x의 참조자 r을 통해 값 증가
    cout << x << ", " << *p << ", " << r << endl;
}
