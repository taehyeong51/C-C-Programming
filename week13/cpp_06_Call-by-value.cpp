#include <iostream>
using namespace std;

void swap(int x, int y) // �Լ� ������ ���� x,y�� ���� �ٲ�� �ܺ� ���� ���� x,y�� ���� �ٲ��� ����
{
    int t = x;
    x = y;
    y = t;
}

// Call-by-values�� ���� �����ؼ� ���޵Ǳ� ������ �Լ� �ܺο� ����� ������ ����� ���ɼ��� ���ٴ� Ư¡
// ���� �Ѱ��� ������ ������ ���翡 ���� ��� �ս� ������ �߻��ϴ� ����

int main()
{
    int x = 10, y = 20;
    cout << " x:" << x << " y:" << y << endl;
    swap(x,y);
    cout << " x:" << x << " y:" << y << endl;
    return 0;
}
