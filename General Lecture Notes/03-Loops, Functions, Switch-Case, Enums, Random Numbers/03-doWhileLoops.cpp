#include <iostream>

using namespace std;

int main()
{
    //* do-while loops are just like while loops but they does the job atleast once
    //* and checks the condition after doing job!

    // do
    // {
        // /* code */
    // } while (/* condition */);
    
    do
    {
        cout << "im looping\n"; // infinite loop!
    } while (true);

    int i = 0;
    do
    {
        cout << "i value is: " << i << endl;
        i++;
    } while (i < 10);
    
    
}
