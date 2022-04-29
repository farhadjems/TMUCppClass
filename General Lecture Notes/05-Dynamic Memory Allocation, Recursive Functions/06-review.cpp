#include <iostream> 

using namespace std;

int main()
{
    int a = 0;
    int *p_a = &a;
    int **p_p_a = &p_a;

    *p_a = 12; // go to the address that is stored in p_a and store value 12

    **p_p_a = 25; // p_p_a stored an address of pointer p_a, this command will
    // change the value stored in the address kept by p_a 

    //p_a = 12; // compiler error, p_a can store address of normal variable, not value

    //*p_p_a = 3; // since its a pointer to pointer, you can store an address of normal variable in it not a value
    
    //p_p_a = 27; // since p_p_a is a pointer to pointer, you can store an address of pointer variable in it, not a value 

    cout << " value stored in a: " << a << endl;
    cout << " address of a: " << &a << endl;
    
    cout << " value stored in p_a: " << p_a << endl;
    cout << " dereferencing p_a: " << *p_a << endl;
    cout << " address of p_a: " << &p_a << endl;

    cout << " value stored in p_p_a: " << p_p_a << endl;
    cout << " dereferencing p_p_a: " << *p_p_a << endl;
    cout << " dereferencing the address stored in p_p_a: " << **p_p_a << endl; 
    cout << " address of p_p_a: " << &p_p_a << endl;

}