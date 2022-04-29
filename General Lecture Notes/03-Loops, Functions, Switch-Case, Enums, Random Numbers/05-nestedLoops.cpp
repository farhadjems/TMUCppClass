#include <iostream>

using namespace std;

int main()
{
    // multiplication table
    for (int i = 1; i < 11; i++) // outer loop
    {
        for (int j = 1; j < 11; j++) // inner loop
        {
            cout << i*j << '\t';
        }
        cout << endl;
    }
    cout << "----------------------------------------------\n";
    // !bad code, inner loop is changing the value of outer loop iterator
    for (int i = 0; i < 11; i++)
    {
        for (int i = 0; i < 11; i++)
        {
            cout << i*i << '\t';
        }
        cout << endl;
    }
    
    
}