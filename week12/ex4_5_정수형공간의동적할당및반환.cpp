#include <iostream>
using namespace std;

int main() {
    int *p;

    p = new int;
    if(!p) {
        cout << "memory assign impossible";
        return 0;
    }

    *p = 5;
    int n = *p;
    cout << "*p = " << *p << endl; // p가 가리키는 공간에 위치한 값 = 5
    cout << "n = " << n << endl; // p가 가리키는 값을 복사한 n 값 = 5

    delete p;
    }
