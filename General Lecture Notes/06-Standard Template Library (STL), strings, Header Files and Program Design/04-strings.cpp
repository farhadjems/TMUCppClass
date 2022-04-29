#include <iostream>
#include <string>

using namespace std;

int main()
{
    //* cin command can be used to take strings as input, but it truncate the input with 
    //* space key, so that you cant use cin to insert a line, the rest of inserted words
    //*  and characters will be in buffer, waiting for the next input to store in
    string firstName;
    string lastName;

    // cout << " enter first name: ";
    // cin >> firstName;
    // cout << " enter last name: ";
    // cin >> lastName;
    
    // cout << " your name is: " << firstName + " " + lastName << endl;

    // as you may test, if you insert two words separated by space,
    // first one will be stored in firstName (as you want!)
    // and second one will be stroed into lastName (as you may not want!)

    //* to change the escape character, you can use getline function
    //* this function takes the escape character, the source of input
    //* and the the variable to store value in as arguments

    // cout << " enter first name: ";
    // getline(cin, firstName, '\n');
    // cout << " enter last name: ";
    // getline(cin, lastName, '\n');
    // cout << " your name is: " << firstName + " " + lastName << endl;

    //! note that you can use any character as an escape character

    //! note that cin and getline has a little problem working together
    //! if you use getline after cin, using enter character (\n) will remain in 
    //! buffer and in the moment getline executes, that character will finish execution
    // int number = 0;
    // cout << " enter a number: ";
    // cin >> number;

    // string name;
    // cout << " enter a name: ";
    // getline(cin, name, '\n');

    // cout << " number is: " << number << "\t and name is: " << name << endl;

    //! note that changing the escape character wont solve the problem
    //! because \n is in buffer and will be saved as the first character 

    //! we must clear the buffer after using cin and then use getline

    //* one way of doing this, is using the ignore method of cin
    // yes, cin is an object :) 

    // int number = 0;
    // cout << " enter a number: ";
    // cin >> number;
    // cin.ignore(); // will clear buffer
    // string name;
    // cout << " enter a name: ";
    // getline(cin, name, '\n');

    // cout << " number is: " << number << "\t and name is: " << name << endl;

    //* string is a class, and has a lot of useful methods 

    // method size returns the number of characters
    // cout << " number of characters in name entered(size): " << name.size() << endl;

    // you can use length instead of size, no difference
    // cout << " number of characters in name entered (length): " << name.length() << endl;

    //* The find method takes a substring and a position in the original string 
    //* and finds the first occurrence of the substring starting from the given position. 
    //* The result is either the index of the first occurrence of the substring,
    //*  or a special integer value, string::npos , which indicates no substring was found.

    string concatenate = "concatenate";
    cout << " in the word "<< concatenate << ", the word \"cat\" is started at letter number: " << concatenate.find("cat") + 1 << endl; 
    cout << " in the word "<< concatenate << ", the word \"eat\" is started at letter number: " << concatenate.find("eat") << endl; 
    cout << " string::npos is: " << string::npos << endl;
    cout << " string::npos + 1= " << string::npos + 1 << endl;

    //* the method rfind does the find job but from the end of string
    //! note that it search ltr, not rtl
    // for example , if you use frind in above example, you have to use "cat"
    // not "tac" !

    //* if you want to store the found string above, you use substr method
    // you need to pass the initial position and length of sub string
    string cat = concatenate.substr(concatenate.find("cat"), 3);
    cout << " using substr method: " << cat << endl;
}