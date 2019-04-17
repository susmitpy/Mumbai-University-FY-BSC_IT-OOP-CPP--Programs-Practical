#include <iostream>

using namespace std;

class Circle
{
public:
    float r;
    Circle(){cout << "Enter radius: "; cin >> r; calArea();}
    void calArea(){cout << "Area: " << 3.14*r*r << endl;}
    int operator == (Circle c){
        if (r == c.r){return 1;}
        else{return 0;}
    }
};

int main()
{
    cout << "Circle 1: \n";
    Circle c1;
    cout << "Circle 2: \n";
    Circle c2;
    ((c1 == c2) == 1 ? cout << "Same " : cout << "Different ") << "Radius\n";
    return 0;
}
