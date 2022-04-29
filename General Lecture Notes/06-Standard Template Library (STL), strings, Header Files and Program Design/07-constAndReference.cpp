#include <iostream>

using namespace std;

int main()
{
    //* you can use const for references
    int a = 2;

    const int& ra = a;

    //! note that references must initiate and you cant change them further
    //! so, what is const refernece? 
    //* the const reference will prevent changing the value

    //ra = 5; since the reference is const, you cant change the value

    //! although "ra" is const,but "a" is not, so you can change it!
    a = 5; // no problem at all!

    //! as you might notice, const reference and const pointer to const
    //! works like each other
}