#include <iostream>
#include <string> //* using this header will let you use string type

using namespace std;

int main()
{
    //* string is the type useful sofr storing a big chain of chars with big number of useful commands 
    string qoute = "C++ Class"; // you can initialize it like this!

    cout << qoute << endl;
    //* anything between "" is a string!
    //* in fact, each message you did print on terminal was a string :D
    cout << "this is a string" << qoute << endl;

    //* taking string from user
    cout << " enter your firstName: ";
    string firstName = "";
    cin >> firstName;
    cout << " your firstName is: " << firstName << endl;

    //* you can append (concat) strings with + operator
    cout << " enter your last name: ";
    string lastName = "";
    cin >> lastName;
    cout << " your full name is: " << firstName + " " + lastName << endl;

    //* note that cin takes inserted value by enter and truncate it with space
    //* to change the insertion operator, use getline instead of cin
    // ! getline(insertion command, variable to store, insertion character)
    cout << " enter your first name: ";
    cin.ignore(); // after using cin >>, th pressed enter will remain in buffer, push it away like this
    getline(cin, firstName, '\n'); 
    // note that \n is enter character and characters must be in single qoutes''
    cout << " your firstName is: " << firstName << endl; 
    
    cout << " say something: ";
    string something = "";
    getline(cin, something, '.');
    cout << " you said: " << something;
}