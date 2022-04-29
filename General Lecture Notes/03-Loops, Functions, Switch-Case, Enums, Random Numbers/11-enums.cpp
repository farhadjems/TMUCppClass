#include <iostream>

using namespace std;

//* enums are created type which is based on integer
//* you can modify its domain, so that variables of this type 
//* must have known values
//* since enums are baesd on integers, you can assign integers to 
//* defined values

enum option{
    option1 = 1, option2 = 2, option3 = 3
};

int main()
{

    cout << "choose one option\n 1.option1\t2.option2\t3.option3\n";
    int menuKey = 0;
    cin >> menuKey;

    switch (menuKey)
    {
    case option1:
        /* option 1 */
        break;
    
    case option2:
        /* option 2 */
        break;
    
    case option3:
        /* option 3 */
        break;

    default:
        cout << " chosen option does not exist!\n";
        break;
    }
}