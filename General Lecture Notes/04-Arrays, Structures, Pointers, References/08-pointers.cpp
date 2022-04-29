#include <iostream>
#include <string>

using namespace std;

int main()
{
    //* with pointer variables, you can store memory address
    //* to define a pointer, you to use "*"
    // <type of value stored in address> *<pointer variable name>;
    // or 
    // <type> *<pointer name>;
    int *pointerToInt;
    //* to make clear that a variable is pointer, you can start pointer name in such ways:
    int *p_a; // the most common method
    int *pB; // not recommended

    //* since pointer is pointing to an address which contian data, 
    //* compiler needs to know what type of data is stored in that address
    //* thats why you must define pointer with type!
    char *p_c;
    bool *p_d;
    string *p_e;
    float *p_f;
    double p_g;


    //! note that pointers are variables that hold memory addresses
    //! so when you print them, you just see memory addresses
    cout << " the value stored in pointer variable p_a is: " << p_a << endl;
    cout << " the value stored in pointer variable p_c is: " << p_c << endl;
    cout << " the value stored in pointer variable p_d is: " << p_d << endl;
    cout << " the value stored in pointer variable p_e is: " << p_e << endl;
    cout << " the value stored in pointer variable p_f is: " << p_f << endl;
    cout << " the value stored in pointer variable p_g is: " << p_g << endl;
    //! note that above variables are not initialized
}