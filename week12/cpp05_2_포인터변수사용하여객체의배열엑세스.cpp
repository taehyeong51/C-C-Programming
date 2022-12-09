#include <iostream>

using namespace std;

class Circle{
    int r;
public:
    Circle() {r=1;}
    Circle(int r):r(r){}

    void setRadius(int x){
        r = x;
    }

    double getArea() {
        return 3.14*r*r;
    }
};

int main() {
    Circle arrC[3];

    arrC[0].setRadius(10);
    arrC[1].setRadius(20);
    arrC[2].setRadius(30);

    Circle *ptr = arrC;
    cout << "** " << ptr << endl;

    for(int i =0; i < 3; i ++){
        cout << ptr++->getArea() << endl;
    cout << "** " << ptr << endl;
    }
}
