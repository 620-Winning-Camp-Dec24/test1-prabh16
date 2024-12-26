// write a program to calculate the area of different shapes using function overloading. Implement overloaded functions to compute the area of a circle, rectangle and triangle.
#include<iostream>
using namespace std;
void area(int r)
{
    int areaOfCircle = 3.14f * r * r;
    cout << "Area of circle: " << areaOfCircle << endl;
}

void area(double base, double h)
{
    double areaOfTriangle = 0.5 * base * h;
    cout << "Area of Triangle: "<<areaOfTriangle << endl;
}

void area(float l, float b)
{
    float areaOfRectangle = l * b;
    cout << "Area of Rectangle:"<<areaOfRectangle << endl;
}
int main(){
    area(2);
    area(4.555,5.555);
    area(4.5f,  5.7f);
    return 0;
}