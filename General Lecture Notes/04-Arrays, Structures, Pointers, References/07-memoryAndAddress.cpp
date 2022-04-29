#include <iostream>
#include <string>

using namespace std;

//* Whenever you declare a variable, it causes some amount of
//* memory to be allocated behind the scenes to hold the information 
//* stored in that variable. When you declare a variable, 
//* the amount of memory allocated is chosen at compile time 
//* you can’t change it or add to it while the program is running

//* memory is a large number of sequential pieces of data
//* each “cell” can store only a very small amount of data: 1 byte ( 8 bits)


int main()
{
    // these are types we learned so far
    bool a = true; // 1 byte
    char b = 'b'; // 1 byte
    int c = 4; // 4 bytes
    float d = 2.14; // 3 bytes
    double e =12.1234567890; // 8 bytes
    string f = "farhad"; // at least 32 bytes
    
    //* just like postman find your home by using postal code, 
    //* computer finds the value in memory using the given address
    //* in fact, name of variables is the thing for humans and computer works with addresses
    //* these variables are stored in memory, and each bit of memory has an address!
    //* computer determines the postal code for each bit and works with memory 
    //* by using this addresses

    //* to see an address of a variable, use the address operator "&"
    cout << "address of variable a is: " << &a << endl;
    cout << "address of variable b is: " << &b << endl;
    cout << "address of variable c is: " << &c << endl;
    cout << "address of variable d is: " << &d << endl;
    cout << "address of variable e is: " << &e << endl;
    cout << "address of variable f is: " << &f << endl;

    //* as you saw, addresses are in the form hexa decimal numbers:
    //* number 12 is a number based on decimal numbering
    //* number C is a numebr based on hexa decimal numbering 
    //* A = 10, B = 11, C = 12, D = 13, E = 14, F = 15
    //* a hexa edcimal number starts with 0x
    //* for example: 0x10ab0200 = 279642624
}


