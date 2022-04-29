#include <iostream>
#include <vector> // vector library - STL
using namespace std;

int main()
{
    //* one of the great features of C++ (that isn’t available in C) 
    //* is the large library of reusable codethat comes with your compiler 
    //* this library is called the standard template library, or STL.
    //* The standard template library is a collection of commonly used 
    //* data structures, including linked lists and several data
    //* structures built on top of binary trees. 
    //* Each of these data structures allows you to specify the type(s) of
    //* data that they store when you create them, so you can use them 
    //* for holding anything you’d like—integers, strings, or structured data.

    //* vector is a replacement for the array, which is resizable without loss of data
    //* to define a vector follow the below syntax
    //* vector<type of data> <name>(<vector size>)
    //! note that if you dont enter the size (empty parantheses or no parantheses)
    //! vector size would be zero, so you have to resize it when you want to use it
    vector<int> vectorOfInt(10);

    //* to manipulate vector elements, use vector just like array

    vectorOfInt[0] = 0;
    cout << " zeroth element of vector is: " << vectorOfInt[0] << endl;

    for (int i = 0; i < 10; i++)
    {
        vectorOfInt[i] = i * 2;
        cout << " element number " << i << " is: " << vectorOfInt[i] << endl;
    }

    // for (int i = 0; i < 10; i++)
    // {
        // cout <<" enter value to sotre in element number " << i << ": ";
        // cin >> vectorOfInt[i];
    // }

    //* in fact, vectors are created using classes, we will learn them 
    //* class is a concept like structures, but much bigger and has more options

    //* you can define some variables(like structure fields) called properties
    //* or functions (called methods) for class
    //* vectors has so many useful methods, you can use them by dot "."

    // the method size returns the size of vector
    cout << " size of vecotorOfInt is: " << vectorOfInt.size() << endl; 
    // as you noticed, you dont have to store the size of vector! 
    // anytime you need it, just use size mehtod!

    //! note that this method is defined for the vector
    //! so it has access to it and no need to use vector as an argument

    // the method push_back(<value>) will add the given value at the end of vector
    // this method will resize the vector automatically!
    vectorOfInt.push_back(12);
    cout << " the last element inserted by push_back method is: " << vectorOfInt[vectorOfInt.size()-1] << endl;

    //! note that, to add element, just use push_back, dont use brackets
    //vectorOfInt[vectorOfInt.size()] = 15; // compiler error


    //* you can search for methods in vector library
    //* also, you can use dot "." and see the list of available properties and methods
    //vectorOfInt.
}