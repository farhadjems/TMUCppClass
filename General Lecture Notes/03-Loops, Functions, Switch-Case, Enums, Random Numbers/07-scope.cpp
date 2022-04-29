#include <iostream>

using namespace std;

void change1() // changes the value of argument to 10
{
    //a = 10; //! bad code note that a is defined in main function scope
    //! and this function cant see what is going on in main function scope!   
}

void change2(int a)
{
    a = 10;
}

void change3(int x)
{
    x = 10;
}

int change4(int x)
{
    x = 10;
    return x;
}

int b = 3;

void change5()
{
    b = 12;
}

int main()
{
    int a = 2;
    cout << "before change1(), a is: " << a << endl;
    change1();
    cout << "after change1(), a is: " << a << endl;


    cout << "before change2(), a is: " << a << endl;
    change2(a);
    cout << "after change2(), a is: " << a << endl;

    cout << "before change3(), a is: " << a << endl;
    change3(a);
    cout << "after change3(), a is: " << a << endl;

    cout << "before change4(), a is: " << a << endl;
    a = change4(a);
    cout << "after change4(), a is: " << a << endl;

    // global variable
    cout << "before change5(), b is: " << b << endl;
    change5();
    cout << "after change5(), b is: " << b << endl;


    // scope of loops

    int i = 0; // this i is defined in int main function scope
    for (int i = 2; i < 10; i++) // this i is dedfiend for this loop and is not available outside of loop scope
    {
        cout << i << endl;
    }

    cout << i << endl;
    
}
