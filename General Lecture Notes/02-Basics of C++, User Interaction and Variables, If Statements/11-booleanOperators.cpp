#include <iostream>

using namespace std;

int main()
{
    //* Boolean operators let you combine expressions
    
    //* boolean not: !
    if (!true)
    {
        cout << " you wont see this message since !true is false\n";
    }
    
    //* boolean and: &&
    if (1 && 2)
    {
        cout << " since 1 and 2 are not 0 (all expressions are true), they are both considered true!\n";
    }

    //* boolean or: ||
    if (1 || 0)
    {
        cout << " just need once expression to be true so that you will see this message!\n";
    }

    //* Review by the order of precedence
    //* ! 
    //* ==, <, >, >=, <=, !=
    //* &&
    //* ||
    
    //example


    //* short circuiting: help compiler finds the needed result faster
    //* OR operator: since you need just one true condition to execute if block
    //* put the expression first which you might be true
    if (true || false)
    {
        cout << " this message will print without checking false!\n";
    }

    //* AND operator: since you need one false to jumping over the if block
    //* put the expression first which you think that might be flase 
    if (false && true)
    {
        cout << " compiler wont check the true since it found wanted false!\n";
    }
}