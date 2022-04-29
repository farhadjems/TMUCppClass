#include <iostream>

using namespace std;

int main()
{
    //* Loops repeatedly execute a block of code.

    //* C++ has 3 kinds of Loops: while, for, do-while

    //* while loops: first checks the condition, then does the work

    // while (/* condition */)
    // {
        // /* code */
    // }

    // while (true) // since its always true, this application wont stop, infinite loop!
    // {
    //     cout << " im looping :)\n";
    // }

    int i = 0;
    while (i < 10) // prints from 0 to 9 in terminal
    {
        cout << "i value is: " << i << endl;
        ++i;
    }

    //! note that = is the assignment operator and == is the equal check operator
    while (i = 0) // it'll print 1 for ever!, not that = is assignment operator, apply i == 1 to work properly
    {
        cout << "i value is: " << i << endl;
        ++i; // update condition
    } // question: consider expression as i = 0, what would happen?
}