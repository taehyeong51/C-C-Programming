#include <iostream>
using namespace std;

void swap(int x, int y) // 함수 내부의 인자 x,y만 값이 바뀌고 외부 전역 변수 x,y는 값이 바뀌지 않음
{
    int t = x;
    x = y;
    y = t;
}

// Call-by-values는 값을 복사해서 전달되기 때문에 함수 외부에 선언된 변수가 변경될 가능성이 없다는 특징
// 값을 넘겨줄 때마다 데이터 복사에 의한 비용 손실 문제가 발생하는 단점

int main()
{
    int x = 10, y = 20;
    cout << " x:" << x << " y:" << y << endl;
    swap(x,y);
    cout << " x:" << x << " y:" << y << endl;
    return 0;
}
