#include <iostream>

using namespace std;

int main()
{
    //* An array is, essentially, avariable with a single name that can store multiple values, 
    //* but with each value indexed by a number.

    //* to define an array: <type> <name> [<size>]

    int a[10];

    //* you can use each element just by using its index
    a[2] = 20;
    cout << "second element: " << a[2] << endl;

    // ! note that array indexing starts from zero!
    a[0] = 1000;
    cout << "zeroth element with index 0: " << a[0] << endl;

    //! note that the last element index is size - 1
    a[9] = 90;
    cout << " last element which its index is (size-1): " << a[9] << endl;


    //* you can use variables for determining the index
    int k = 5;
    a[k] = 50;
    cout << " here, variable k is used for accessing an element of array: " << a[k] << endl;

    //* since you can use variables for array indexing, you can use for loops for 
    //* manipulating on array
    
    int b[10];

    cout << " using for loop for changing and printing elements:\n";
    for (int i = 0; i < 10; i++)
    {
        b[i] = i * i; // assigning value to element, index is determined by for loop variable "i"
        cout << b[i] << endl; // printing variable, index is determined by "i"
    }
    
    // you can initialize arrays with for loop!
    int c[5];
    for (int i = 0; i < 5; i++)
    {
        c[i] = 0;
    }
    
}