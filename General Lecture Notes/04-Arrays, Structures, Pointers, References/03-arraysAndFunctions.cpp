#include <iostream>

using namespace std;

void printArray(int a[]) 
{
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << endl;
    }
}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
}

void setValue(int a)
{
    a = 5;
}

void setArrayValue(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = 50;
    }
}

void print2DArray(int a[][4], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
}

void change2DArray(int a[][4], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            a[i][j] = 34;
        }
        
    }
    
}

int main()
{
    //* you can pass arrays to functions!
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        a[i] = i*i;
    }
    printArray(a); // no need to pass the size! system knows the exact size!
    printArray(a, 4); // here , function needs the size! note that this function works with any size of array
    
    
    //* you cant change variable's value like below :(
    int b = 2;
    cout << "before changing b: " << b << endl;
    setValue(b);
    cout << "after changing b: " << b << endl;
    // b doenst change like this 

    //* note that you can change array elements by functions
    //* its related to its data structure in memory which we will talk about in near future :)
    int c[5];
    for (int i = 0; i < 5; i++)
    {
        c[i] = 0;
    }
    cout << " before chaning value by setArrayValue function\n";
    printArray(c, 5);
    cout << " after chaning value by setArrayValue function\n";
    setArrayValue(c,5);
    printArray(c, 5);
    // values stored in c is changed!

    //* although its not needed to insert the size of 1D array when you use functions
    //* but you have to insert the second size of array in defining the function !
    int d[3][4];
    print2DArray(d, 3, 4);
    change2DArray(d, 3, 4);
    print2DArray(d, 3, 4);
    

}