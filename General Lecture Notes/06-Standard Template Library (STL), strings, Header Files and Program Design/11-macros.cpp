//* as you saw, we use # to include libraries
#include <iostream>
#include <cmath>

using namespace std;

//* we use # to define macros, 
//* macros are so useful, you can define variables
//* you can add peaces of code based on conditions
//* and a lot of other things
//* the most important thing about macros is that
//* the related oparation to macros will be executed 
//* in the time of compilation

//* you can define variables using macros

# define pi 4*atan(1)

int main()
{
    cout << " using macros, pi number is: " << pi << endl;

    //* you can define a peace of code using macros

    #ifndef a // here, in the time of compilation, code checks if the variable a is not defined, executes the below peace of code
        #define a 2
    #endif

    cout << " using macros, a is defined: "  << a << endl;

    
}