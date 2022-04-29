#include <iostream>

using namespace std;

int main()
{
    //* for loops: doing a job for precise amount of iteration
    
    // for (loop vaariable definition or assignment; condition; update)
    // {
        // /* code */
    // }

    for (int i = 0; i < 5; i++)
    {
        cout << "i value is: " << i << endl;
    }

    // you can change the update condition!
    for (int i = 0; i < 5; i+=2)
    {
        cout << "i value is: " << i << endl;
    }
    
    // starting from another number than 0 and decrementing!
    for (int i = 5; i > 0; i--)
    {
        cout << "i value is: " << i << endl;
    }
    
    // you can choose name for iterator
    for (int iterator = 0; iterator < 5; iterator++)
    {
        cout << "iterator value is: " << iterator << endl;
    }
    
    // defining the loop variable outside of for expression box 
    int a = 0;
    for (a = 5; a < 10; a++)
    {
        cout << "a value is: " << a << endl;
    }
    
    // you can ommit condition box, since there is no condition, for loop acts like infinite loop!
    for (int i = 0; ; i++)
    {
        cout << "i value is: " << i << endl;
    }
    
    // you can ommit update condition, since there is no update, for acts like a infinite loop!
    for (int i = 0; i < 5; )
    {
        cout << "i value is: " << i << endl;
    }

}