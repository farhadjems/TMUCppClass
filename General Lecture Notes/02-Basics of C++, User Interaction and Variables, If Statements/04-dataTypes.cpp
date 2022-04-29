#include <iostream>

using namespace std;

int main()
{
    //* variables are useful for storing data in memory
    //* based on the type of data, you must use different types
    //* by using assignment operator =, you can assign value to variable
    //* <type> <variable name> = <value>

    int a = 10; //* int type is useful for saving integer numbers
    float b = 10.1234; //* float is useful for saving vlues with decimals
    double c = 10.123456789; //* like floats useful for saving decimals but with more decimals
    char d = 'a'; //* useful for saving characters

    //* you can define different variables of same type in one line
    int a1, a2, a3, a4; //! note that you cant start the name with numbers

    /*
        a brief note about naming style
        kebab case : int my_number;
        camel case: int myNumber;
    */
    
    //* you can take input from user and store it in variables
    //* to take input from user, use cin command with insertion operator >>
    int f = 0;
    cout << " insert value for variable f: ";
    cin >> f;
    cout << " the value stored in f by insertion is: " << f << endl;;

    //* note that if you try to store a float number into int variable
    //* the number will be truncated!
    int g = 2/3;
    cout << " int g = 2/3 = " << g << endl;

    //! note that to print each variable, you need to use a seperate insertion operator <<
    //! bad code
    // cout << "f is: " f;
    //! true code
    // cout << " f is: " << f << endl;

    //* you can change the value of defined variable
    a = 12;
    g = 33;
}