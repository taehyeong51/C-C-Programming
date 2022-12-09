#include <iostream>

using namespace std;

void swap(int &rx, int &ry)
{
    int t = rx;
    rx = ry;
    ry = t;
}

int main()
{
    int x = 10, y = 20;
    cout << " x:" << x << " y:" << y << endl;
    swap(x,y);
    cout << " x:" << x << " y:" << y << endl;
    return 0;
}
