#include <iostream>

using namespace std;

int factorial(int x)
{
    if (x == 0) // base case 
    {
        return 1;
    }
    return (x * factorial(x-1));
    
}

void pirntNumbers(int num1, int num2)
{
    cout << num1;
    if (num1 < num2)
    {
        pirntNumbers(num1+1, num2);
    }
    cout << num1;
    
}

int main()
{
    //* recursion is a technique which a function is called once 
    //* and without using any kind of loop, an operation will be 
    //* done repeatedly

    //* in this technique, a function will start calling itself,
    //* untill a base case hits, then it returns the result of computation
    //* until the first function call executed


    // common example: factorial
    cout << "factorial(4): " << factorial(4) << endl; // 24


    // example: printing numbers like 1234554321
    pirntNumbers(1, 9); // 123456789987654321
    cout << endl;

    //* When it is more natural to express an algorithm in terms of a sub-problem 
    //* than in terms of a loop, the best way is using recursion

    //* the main power of recursive functions is that you dont need to 
    //* store the updated result in memory!
    //* in factorial example, no vairable is used to store the result of
    //* recursive calls

    //* In general, it is quite easy to write a recursive algorithm as a loop, 
    //* and vice versa, when you don't need to do anything with the result that
    //*  comes from calling the recursive function. This is called tail recursion 
    //* when the recursive call is the last thing the function does, 
    //* at the tail of the function. Because the recursive call is the last operation
    //* it’s no different from going to the next step in the loop. Nothing
    //* from the previous call is needed once the next call completes

    //! note that recursion uses the stack memory, so if the operation takes 
    //! a huge amount of memory, you'd better to use loops
    //! biggest problem of using recursive functions is that the base case is incomplete

}