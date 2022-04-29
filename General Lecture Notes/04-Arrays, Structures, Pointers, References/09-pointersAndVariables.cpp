#include <iostream>

using namespace std;


int main()
{
    //* as we saw earlier, normal variables cans store values
    int a = 2;

    //* and pointer variables can store memory addresses
    int *p_a;

    //* since pointers can store addresses, you can store other variable's address into a pointer
    //! note that you can access to variable's address by operator "&"

    p_a = &a; // here, the address of variable a is stored in variable p_a
    cout << " the address of variable a: " << p_a << endl;

    //* you can print the value in the address stored in pointer
    cout << " the value in the address stored in p_a (which is value stored in a): " << *p_a << endl;
    //! as you saw, to have access to value, you must use "*" before pointer 

    //* you can change value stored stored in normal variable using pointers!
    *p_a = 4;
    cout << " value stored in a is changed by using pointer p_a: " << a << endl;

    //* Using * to get the value at a pointed-to address is called dereferencing the pointer


    //* A variable stores a value, so when you use the variable, you get its value. 
    //* You have to add some extra,the ampersand "&", in order to retrieve
    //*  the address of that variable.

    //* A pointer stores an address, so when you use the bare pointer, you get that address back. 
    //* You have to add something extra, the asterisk "*", 
    //* in order to retrieve or modify the value stored at the address.



    //* if there is no address to store in a pointer, you can use "NULL" to initialize with
    double *p_null = NULL;
    cout << " address stored in p_null is: " << p_null << endl;

    //! note that initializing pointer with NULL is just like initilizing variable with 0
}