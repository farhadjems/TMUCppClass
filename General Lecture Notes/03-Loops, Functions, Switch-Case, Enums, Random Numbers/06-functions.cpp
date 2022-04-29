#include <iostream>

using namespace std;

//* functions are one of the most useful tools for programming
//* it has its own style and some programming lanugages just work with functions 
//* functions help you divide work into parts and helps you debug easier and more effective
//* with functions you can re-ue your code again and again

//* to create function, follow below template
//<return type> <function name> (arguemnts with their types)
// {
    // function code block
// }

// function add, adds 2 arguments and retruns the result
int add(int x, int y)
{
    int sum = x + y;
    return sum;
}

int returnTen()
{
    return 10;
}

void printMessage()
{
    cout << "this is the 2nd session of C++ Class";
}

//* main is the most important function in C++, it controls the flow of program and run the code
int main() 
{
    int a = 2;
    int b = 3;
    
    int c = add(a, b); // function with two arguments  
    int d = returnTen(); //function with return and no arguments

    printMessage(); // function with no arguments and no retrun

}