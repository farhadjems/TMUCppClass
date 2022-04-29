#include <iostream>

using namespace std;

int main ()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if ( x < 10 ) // checking user input in expression
    {
        cout << "You entered a value less than 10" << '\n';
    }

    //* experssions must check whether if they are true or not
    //* To the compiler, an expression is true if it evaluates to a nonzero number. 
    //* A false statement evaluates to zero.

    if (1)
    {
        cout << " 1 is true!\n";
    }
    if (0)
    {
        cout << " 0 is false so that you wont see this message in terminal\n";
    }

    //* you can use true and false instead of 1 and 0
    
    if (true)
    {
        cout << " you can use true instead of 1!\n";
    }
    if (false)
    {
        cout << " you can use false instead of 0!\n";
    }

    //* When you perform a comparison using one of the relational operators, 
    //* the operator will return true or false

    if (2 == 2)
    {
        cout << " 2 is equal to 2!\n";
    }

    if ((2 == 2) == true) // no need to add == true, it is considered by default!
    {
        cout << " 2 is equal to 2!\n";
    }

    //* relational operators
    //* > < >= <= == !=

    //* you can use bool type to define variables 
    //*and store the result of relational operators in them
    int x = 2;
    bool isXTwo = x == 2;

    if (isXTwo)
    {
        cout << " x is equal to 2\n";
    }
       
}