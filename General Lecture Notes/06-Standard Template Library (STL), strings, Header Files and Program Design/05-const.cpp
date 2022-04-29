#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void changeValue(int& x)
{
    x *= 2;
}


int main()
{
    //* any variable we used up to now can be modified 
    //* you can change them directly or let a function to change it

    int a = 12;
    a = 24; // a is changed
    changeValue(a);

    //* sometimes you need variables that hold values and you dont want to change them
    //* like mathematical constants
    // double pi = 4*atan(1); // pi number
    //! a little note - mathematical functions are defined in "cmath" library
    //! you can also use "math.h", this library is used in C language and "cmath" is its C++ version
    
    //* as you know, you can change the value stored in variable pi
    //* this is not the thing we want! 

    //* "const" is a keyword help you define variables and tell the system that
    //* this variable is constant, so it cannot be changed

    // double const pi = 4*atan(1);

    // you can change the location of const without any difference 
    const double pi = 4*atan(1);

    //* since these variables are constant, you change them after definition
    // pi = 2; // compiler error - trying to change a const variable's value
}