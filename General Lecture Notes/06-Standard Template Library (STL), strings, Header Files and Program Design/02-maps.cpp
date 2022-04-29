#include <iostream>
#include <map> // map library - STL
#include <string>

using namespace std;

int main()
{
    //* in arrays and vectors, you use integers to access the data 
    //* stored in the elements.
    //* in other words, type of index is int
    //* maps let you choose the type of index, you can choose any type!

    // to create a map follow the below syntax
    // map<type of key (index), type of value>
    map<string, string> emails;
    // this map's key (index) is of type string (fisrt string)
    
    //* you dont need to specify the size! unlike arrays and vectors
    //* you can add the element using brackets!

    emails["Farhad Jems"] = "farhadjems@gmail.com";
    
    cout << " Farhad Jems Email is: " << emails["Farhad Jems"] << endl;    

    //! If you call an element which doesnt exist, nothing will happen
    //! no error accured and just no data returned!

    cout << "John Doe email is: " << emails["John Doe"] << endl;

    //* like vectors, maps are created using class, so it has methods!
    // mehtod erase will delete the given element value, need the key as an argument
    // note that it makes that element empty, so its available to use again!
    emails.erase("Farhad Jems");
    cout << " Farhad Jems Email is: " << emails["Farhad Jems"] << endl;    
    // as you saw nothing returned, it means that it is deleted

    // size method will return the size of map
    cout << " size of emails: " << emails.size() << endl;

    //empty method checks if the map is empty or not, result is of bool type
    cout << " checking if emails is empry or not: " << emails.empty() << endl;
    //! the result was 0, means that is not empty, it has two 
    //! elements with keys "Farhad Jems" and "John Doe"
    
    // clear method will make the map empty!
    emails.clear();
    cout << " checking if emails is empry or not: " << emails.empty() << endl;
    // this method deletes all the elements

}