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
    cout << "*p = " << *p << endl; // p�� ����Ű�� ������ ��ġ�� �� = 5
    cout << "n = " << n << endl; // p�� ����Ű�� ���� ������ n �� = 5

    delete p;
    }
