#include <iostream>

using namespace std;

int main()
{
    
    //* as we know, pointer is a kind of variable, so it has an address 
    //* in memory, you can use another pointer which stores the address of 
    //* other pointers, this pointer is called "pointer to pointer"
    int a = 2;
    int *p_a = &a;
    int **p_p_a = &p_a;

    cout << " the value stored in a: " << a << endl;
    cout << " the address of a: " << &a << endl;

    cout << " the value stored in p_a: " << p_a << endl;
    cout << " dereferencing p_a: " << *p_a << endl;
    cout << " address of p_a: " << &p_a << endl; 
    
    cout << " the value of p_p_a: " << p_p_a << endl;
    cout << " dereferencing p_p_a: " << p_p_a << endl;
    cout << " the address of p_p_a: " << &p_p_a << endl;


    //* 2D arrays are 1D arrays which each element is an array
    int A[4][3];
    
    // here, each element is an array of size 3
    // this is the reason that you have to insert the 2nd size 
    // in definition of functions

    //* to have such data structure in free memory, you need 
    //* an array of pointers which each of them is pointing to
    //* a sequence of addresses
    //* so, you must use a pointer pointing to this array of pointers!
    //* you can use a pointer to pointer
    int sizeX = 4;
    int sizeY = 3;
    int **p_p_b = new int*[sizeX];
    //* here, you stored an array of addresses of pointers in a pointer to pointer
    //* to define the second dimension, you must store an array of addresses of normal variables
    for (int i = 0; i < sizeX; i++)
    {
        p_p_b[i] = new int[sizeY]; 
    }
    //* here, each element of p_p_b is an array of addresses 

    //* lets check the addresses
    for (int i = 0; i < sizeX; i++)
    {
        
        for (int j = 0; j < sizeY; j++)
        {
            cout << "row " << i << " column " << j << " is: " << &p_p_b[i][j] << '\t';
        }
        cout << endl;
    }

    //* you can also store values
    for (int i = 0; i < sizeX; i++)
    {
        for (int j = 0; j < sizeY; j++)
        {
            p_p_b[i][j] = i + j; // assigning values
            cout << p_p_b[i][j] << '\t'; // printing values
        }
        cout << endl;
    }

    //* as you see, each row is a sequence of memory 
    //* but these  rows are not defiend sequentially
    //* in other words, the address of first elements in each row
    //* does not create a sequence 

    //* to delete such pointer, fisrt you have to delete each row
    //* then delete the main column of pointers
    for (int i = 0; i < sizeX; i++)
    {
        delete p_p_b[i];
    }
    delete [] p_p_b;
    
    
    //! we saw that we can use pointers instead of 1D arrays
    //! but note that you cant do this for multi-dimensional arrays
    //int **p_p_c = A; // compiler error

    //! the reason is that arrays are a big sequence of memory addresses
    //! even if it is multi dimensional
    //! but when you use pointer to pointer, each row is defined separately

    //! Pointers can be treated like an array, but pointers are not arrays
    
}