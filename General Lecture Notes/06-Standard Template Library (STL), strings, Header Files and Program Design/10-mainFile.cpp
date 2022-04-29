#include <iostream> 

//* in the main file, the file that executes the code
//* just call the header file 
//! note that, we use "" to include header files 
//! <> is used to include Cpp libraries
#include "10-arithmeticHeader.h"

using namespace std;

int main()
{
    //* and now you can use the defined functions in header files
    //* even VS code helps you to use them!
    cout << "2 + 5 = " << addition(2, 5) << endl;

    //! to create an executable file, you must compile all .cpp files 
    //! in this case, this file and 10-arithmeticFunctions.cpp file must compile together
    //! to do that, give both fil names to the compiler in terminal
}