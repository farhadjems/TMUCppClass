#include <iostream>

using namespace std;

void add()
{
    int num1 = getValue();
    int num2 = getValue();
    int sum = num1 + num2;
    printNumber(sum);

}


// function definition 
int getValue()
{
    cout << " enter value: ";
    int value;
    cin >> value;
    return value;
}

// function declaration
void printNumber(int number);

int main()
{
    add();
}

void printNumber(int number)
{
    cout << " result is: " << number;
}