#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle() {radius=1;}
    Circle(int r) {radius = r;}
    void setRadius(int r){radius=r;}
    double getArea();
};

double Circle::getArea(){return 3.14*radius*radius;}

int main() {
    Circle circles[2][3]{1,2,3,4,5,6};
    for(int i =0; i<2; i++)
    for(int j=0;j<3;j++){
        cout << "Circle [" << i << "," << j << "] Area : " ;
        cout << circles[i][j].getArea() << endl;
    }
}
