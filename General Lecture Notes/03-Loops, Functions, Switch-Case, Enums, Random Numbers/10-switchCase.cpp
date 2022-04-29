#include <iostream>

using namespace std;

int main()
{
    //* Switch case statements are a substitute for long if statements 
    //* that compare a single variable to severalintegral values. 
    //* An integral value is simply a value that can be expressed 
    //* as an integer, such as int or char .

    cout << "choose one option\n 1.option1\t2.option2\t3.option3\n";
    int menuKey = 0;
    cin >> menuKey;

    // using if
    if (menuKey == 1)
    {
        // option 1
    }
    else if (menuKey == 2)
    {
        /* option 2 */
    }
    else if (menuKey == 3)
    {
        /* option 3 */
    }
    else
    {
        cout << " chosen option does not exist!\n";
    }


    // using switch-case
    switch (menuKey)
    {
    case 1:
        /* option 1 */
        break;
    
    case 2:
        /* option 2 */
        break;
    
    case 3:
        /* option 3 */
        break;

    default:
        cout << " chosen option does not exist!\n";
        break;
    }
    
    //* dont forget to use braek, if you dont use it the below case will execute
    
    
}