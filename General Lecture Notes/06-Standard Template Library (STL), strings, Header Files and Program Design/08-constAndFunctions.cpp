#include <iostream> 

using namespace std;

void changeValue(int* pa)
{
    *pa = 2;
}

void changeValue(int& ra)
{
    ra = 2;
}

void printValue(const int& ra)
{
    cout << " value is: " << ra << endl;
    // ra = 5; compiler error, "ra" is defined as const variable
}

void printValue2(int& ra)
{
    cout << " value is: " << ra << endl;
}

int main()
{
    //* as you may notice, working with pointers for passing variables
    //* is not a convenient method

    //* using references are much more better and is easy to understand

    //* I recommend to use references for functions
    int* pa = new int;
    changeValue(pa);
    cout << " value stored in the address kept by pa is: " << *pa << endl;
    
    int a;
    changeValue(a);
    cout << " value stored in variable a is: " << a << endl;
    //----------------------------------------------------------------

    //* If you want to prevent changing value of variable by a function
    //* you can define function with const arguments
    printValue(a);

    
    //* we know that, if you want to be sure about not changing the value hold by a variable
    //* you can use "const"
    int const b = 5;
    // b = 2; // compiler error, b is const

    //! If you want to pass a const variable as an argument to a function
    //! that argument must be defined as "const"
    //! If the argument is not defined as const, you will get a compiler error
    printValue(b); // since the argument is defined as const
    // printValue2(b); // compiler error, argument is not defined as const

}