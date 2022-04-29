#include <iostream>
#include <string>

using namespace std;

int main()
{
    //* break command can break the loop and continue the program

    string password;
    while ( 1 )
    {
        cout << "Please enter your password: ";
        cin >> password;
        if ( password == "foobar" )
        {
            break;
        }
    }
    cout << "Welcome, you got the password right";

    for (int i = 0; i < 10; i++)
    {
        cout << "i value is: " << i << endl;
        if (i == 5)
        {
            break;
        }
    }

    //* continue can jump over one step and start the loop again!

    int input = 0;
    while ( true )
    {
        cin >> input;
        if ( input == 0 )
        {
            continue;
        }
        cout << " input is: " << input << endl;
    }
}