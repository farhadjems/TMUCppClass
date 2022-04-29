#include <iostream>

using namespace std;

int main()
{
    //! note that the last element has the index = size - 1 
    int a[3];
    a[3] = 12; // bad code
    //! the problem is that this error wont show right now and you can compile this code :(
    //! it shows itself in running code

    //! care using for loops 
    for (int i = 0; i <= 3; i++) // using the <= causes i to be 3 in the last round! above problem comes again
    {
        a[i] = 15;
    }

    //* code runs but stops at this error lines
    //* you may see some error like : segmentation fault!

    //! right now, you cant define arrays with large sizes, causes the "stack over flow " error
    //! we will talk about  this error in near future!
    int b[10000000000000];
    for (int i = 0; i < 10000000000000; i++)
    {
        b[i] = i;
    }
    
    
    
}