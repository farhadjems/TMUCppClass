#include <iostream>

using namespace std;

int main()
{
    //* The code after an else (whether a single line or code between brackets)
    //* is executed when the condition checked by the if statement is false.
    
    int number = 0; // dont forget to initialize
    cout << "Enter a number: ";
    cin >> number;

    if (number < 10)
    {
        cout << " number is less than 10\n";
    }
    else
    {
        cout << " number is greater than 10\n";
    }

    //* else if statements let you consider multiple conditions for expressions

    if (number < 10)
    {
        cout << " number is less than 10\n";
    }
    else if (number < 20)
    {
        cout << " number is greater than 10 and less than 20\n";
    }
    else
    {
        cout << " the entered number is greater than 20\n";
    }

    //* you can also compare strings!
    string password = "1234";

    if (password == "farhad")
    {
        cout << " access granted!\n";    
    }
    else
    {
        cout << " wrong password!\n";
    }

    
    
    
    
}