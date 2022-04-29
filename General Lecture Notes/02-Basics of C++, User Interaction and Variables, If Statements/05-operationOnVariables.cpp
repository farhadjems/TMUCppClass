#include <iostream>

using namespace std;

int main()
{
    int a  = 10;
    int b = 2;

    //* applying arithmetic operators
    //* summation +, subtraction -, multiplication *, division /
    int c = 2 + 3;
    int d = 4 * 5;
    int e = d + c;
    int f = a - b;
    int g = a / b;

    //* increment operator
    f = f + 1; // note that assignment operator looks right first
    f++; // adds one to f
    ++f; // adds one to f
    cout << "f is: " << f << endl;
    cout << "f++ is: " << f++ << endl;
    cout << "f is: " << f << endl;
    cout << "++f is: " << f++ << endl;
    cout << "f is: " << f << endl;
    //! the difference is in ++f, fisrt incement operator compiles then printing f
    //! but in f++, first printing compiles then incrementing f

    //* like ++ operator, we have --  operator called decrementing operator
    f--;
    --f;

    //* instead of using command like this: f = f+5;
    //* you can use operator +=
    f = f + 5;
    f +=5; // works the same 
    //* +=, -=, *=, /=
}