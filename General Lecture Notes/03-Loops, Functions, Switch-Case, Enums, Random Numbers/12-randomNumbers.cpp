#include <iostream>
//* to create psudo-random numbers, add cstdlib header file
#include <cstdlib>
//* to use functions related to time, use ctime header
#include <ctime>

using namespace std;

// this function creates random number in the range of low (inclusive) to high (exclusive)
int randomNumber(int low, int high)
{

}

int main()
{
    //* to create a pseudo random number, you need a seed which contains numbers
    //* to create seed, use srand()
    // srand (100);
    //* this function takes a number as an argument
    //* best argument is time, to put time, use time() function
    //* NULL is an empty value 
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        cout << " random number: " << rand() << endl;        
    }
    
}