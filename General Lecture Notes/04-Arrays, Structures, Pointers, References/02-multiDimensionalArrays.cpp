#include <iostream>

using namespace std;

int main()
{
    //* arrays can be defined in several dimensions
    
    int a[10]; // 1D array

    int b[10][10]; // 2D array

    //* just like before, you can use each element just by inserting index
    b[2][5] = 25;
    cout <<" b[2][5] is: " << b[2][5] << endl;
    
    //* you can use nested for loops for manipulating them
    int c[4][5];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            c[i][j] = i * 10 + j;
            cout << c[i][j] << '\t';
        }
        cout << endl;
    }

    int d[5][5]; // multiplication table of size 5x5
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            d[i][j] = (i++) * (++j);
            cout << d[i][j] << '\t';
        }
        cout << endl;
    }
    
    int c[4][3][2]; // you can determine as many dimensions as you want! 
}