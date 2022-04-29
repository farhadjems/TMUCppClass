#include <iostream>

using namespace std;

int main()
{
    //* as we know, arrays are useful things for storing group of data
    int array[4];
    //! note that this array is defined in stack memory
    // lets see the address of array elements
    for (int  i = 0; i < 4; i++)
    {
        cout << " element number " << i <<" address is: " << &array[i] << endl;
    }

    // as we see address are in order, since int value takes 4 bytes,
    // the distance between addresses are 4
    // if you test for characters, you'll see the distance is 1 
    //! so we can understand that addresses are in bytes

    //* you can use pointers for pointing to arrays
    int *p_a = array;
    //! no error, does it mean that arrays are kind of pointers? 
    
    //* An array is, after all, a series of values laid out sequentially in memory. 
    //* Since a pointer stores a memory address, it can store the address of 
    //* the first element of an array. To access each individual element of 
    //* the array you simply take a value that is a fixed distance away from 
    //* the start of the array.

    //! It is important to understand that arrays are not pointers,
    //! but that arrays can be assigned to pointers

    //! the reason is that system uses the sequential addresses (by knowing the size of
    //! the data type) to access the data stored by an array

    for (int i = 0; i < 4; i++)
    {
        p_a[i] = i * 2;
    }

    for (int i = 0; i < 4; i++)
    {
        cout << " element i value: " << p_a[i] << endl;
    }

    //* if you use sequence of addresses in free memory, you are using
    //* free memory in the form of arrays! to do that: 
    int *p_b = new int [5];

    for (int i = 0; i < 5; i++)
    {
        p_b[i] = i;
    }
    
    //! note that you cant initialize this pointer like below,
    //! because its technically not an array
    // p_b = {1, 2, 3, 4, 5}; // compiler error

    //* you took some amount of free memory from system
    //* so if you dont need it anymore, delete it
    delete [] p_b;

    //* maybe, the main advantage of using pointers instead of arrays is 
    //* that you can determine the size of memory you need
    
    int size = 3;
    cout << " enter the size of memory you need: ";
    cin >> size;
    int *p_d = new int [size];

    //! this is something that you cant do with arrays in older versions of C++
    int size2 = 5;
    int array2[size2]; // compiler error in older versions

    array2[3] = 5;
    cout << array2[3];

    //* since above array is defined on stack memory, its size is limited
    
    
}