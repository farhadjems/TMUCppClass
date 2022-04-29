#include <iostream>

using namespace std;

void changeVariable(int x)
{
    x = 5;
}

void changeVariableByPointer(int *p_x)
{
    *p_x = 15;
}

int main()
{
    int a = 2;
    int *p_a = &a;

    cout << "before using changeVariable(): " << a << endl;
    changeVariable(a);
    cout << "after using changeVariable(): " << a << endl;
    // no change happened
    //! note that you have copied a and passed the copied one to function

    //* you can use pointers to pass variables to functions
    //* so that there is no copy! function has access to the variable!
    //* to make that happen, function must be able to take pointer arguments
    
    cout << "before using changeVariableByPointer(): " << a << endl;
    changeVariableByPointer(p_a);
    cout << "after using changeVariableByPointer(): " << a << endl;
    // !value of a is changed

    //* the reason is that you are using an address, so that function finds the address
    //* in the memory and change the value stored in the address

    //! note that since pointer variable is different with normal variable 
    //! you can overload functions




    //how to switch variables using functions

}