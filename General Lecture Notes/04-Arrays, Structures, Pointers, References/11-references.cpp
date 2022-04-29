#include <iostream> 

using namespace std;

void changeVariableByReference(int &r_x)
{
    r_x = 15;
}



int main()
{
    //* References are kind of variables which can store address of other variables
    // <type> &<name> = <other variable>;
    int a = 2;
    int &r_a = a; 
    //! note that you must initialize references

    //! the main difference between pointers and references is that you must initilize 
    //! references with address of other variables and you cant use NULL!
    //! in contrast, you dont have to initialize pointers and also you can use pointers 
    //! for taking free memory (you cant do this with references, we will talk about it)

    //* main use of references is passing variables to functions! it syntax is more comfortable

    cout << " a, before using changeVariableByReference(): " << a << endl; 
    changeVariableByReference(r_a);
    cout << " a, after using changeVariableByReference(): " << a << endl;

    //! good news from refrences is that you need to use references for 
    //! functions whcich its argument is reference
    int b = 3;
    cout << " b, before using changeVariableByReference(): " << b << endl; 
    changeVariableByReference(b);
    cout << " b, after using changeVariableByReference(): " << b << endl;

    //! note that you cant use pointer or pass address to these functions!
    int *p_b = &b;
    // changeVariableByReference(p_b); // compiler error
    // changeVariableByReference(&b); // compiler error


    //* references are a wa y better than pointers for passing variables to functions!
    //* since its syntax is more easier
    
}