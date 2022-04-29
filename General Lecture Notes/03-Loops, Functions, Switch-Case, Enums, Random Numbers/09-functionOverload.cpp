#include <iostream>
#include<cmath> // mathematical functions header file

using namespace std;

double pi = 4 * atan(1); // pi number

double area(double r)
{
    double area = pi * r * r; // power(r,2);
    return area;
}

double area(double length, double height)
{
    double area = height * length;
    return area;
}

double area(double base, double height)
{
    double area =  height * base / 2;
    return area;
}

int main()
{
    //* C++ allows you to overload functions:
    //* this means that as long as arguments to functions are different, 
    //* you can use same name for several functions

    cout << " area of circle with radius 1 is: " << area(1.0) << endl;

    cout << " area of rectangle with hight 1 and length 2 is: " << area(1.0, 2.0) << endl;
     
}