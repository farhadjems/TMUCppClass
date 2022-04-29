#include <iostream>

using namespace std;

int main()
{
   //* If statements allows you to control 
   //* whether a program enters a section of code or not 
   //* based on whether a given condition is true or false.

   //* if syntax
   //* if (expressions)
   //* {
            // your code to execute if expressions are true
   //* }

   if (5 < 10)
   {
       cout << " 5 is less than 10, haah i know math :))";
   }

   if (5 > 10)
   {
       cout << " math is so boring, i cant understand why 5 is greater than 10 :(";
   }
   
   //* if the code is just one statement, you can ommit {}
    if (5 < 10)
        cout << " for single statement, no need to use {}\n";
    //* but I highly recommend using it ! it makes you code cleanter and more understandable :D
    //! if you add more statements without {} they will execute out of if control


}