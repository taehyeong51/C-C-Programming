#include <iostream>

using namespace std;

// �����ڴ� �Ҵ�� �ϳ��� �޸� ������ �ٸ� �̸��� ���̴� ��

int main() {
    int x = 1;
    int *p = &x;
    int &r = x; // ����x�� ���� ���� r�� ����� x�� r�� ���� ���� ����
    cout << x << ", " << &x << endl;
    cout << p << ", " << &p << ", " << *p << endl;
    cout << r << ", " << &r << endl;
    cout << "----------" << endl;
    x++; // x ���� ���� ����
    cout << x << ", " << *p << ", " << r << endl;
    (*p)++; // x�� �ּҰ��� ����� �ּ� ���� p�� �δ��̷�Ʈ�Ͽ� �� ����
    cout << x << ", " << *p << ", " << r << endl;
    r++; // x�� ������ r�� ���� �� ����
    cout << x << ", " << *p << ", " << r << endl;
}
