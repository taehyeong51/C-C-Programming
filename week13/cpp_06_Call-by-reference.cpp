#include <iostream>

using namespace std;

void swap(int &rx, int &ry) // int &rx = x, int &ry = y�� ������� x,y�� �ٸ� �̸��� rx�� ry�� �������
                              // x�� rx�� ���� �޸� �ּҸ�, y�� ry�� ���� �޸� �ּҸ� ���� ��
{
    int t = rx;
    rx = ry; // �޸� �ּҸ� ���� �� ����
    ry = t; // �޸� �ּҸ� ���� �� ����
    // �Լ� ����� ���ÿ� ������ ���·� �̸��� �־��� rx,ry�� �Ҹ��
}

int main()
{
    int x = 10, y = 20;
    cout << " x:" << x << " y:" << y << endl;
    swap(x,y);
    cout << " x:" << x << " y:" << y << endl;
    return 0;
}
