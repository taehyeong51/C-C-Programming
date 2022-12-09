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
    for(int i =0; i < 3; i ++){
        cout <<"Circle " << i << ": ";
        cout << arrC[i].getArea() << endl;
    }
}
