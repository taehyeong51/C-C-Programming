#include <iostream>

using namespace std;

void swap(int *px, int *py)
{
    int t = *px;
    *px = *py;
    *py = t;
}

int main()
{

    int x = 10, y = 20;
    cout << " x:" << x << " y:" << y << endl;
    swap(&x, &y);
    cout << " x:" << x <<" y:" << y << endl;
    return 0;
}
