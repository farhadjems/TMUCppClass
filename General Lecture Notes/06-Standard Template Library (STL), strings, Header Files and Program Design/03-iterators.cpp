#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    //* you used for loop to go over the elements of an array or a vector.
    //* to do this, you used an iterator of type int

    //* there is another way of loopingg over elements
    //* since vectors and maps use special data structures to store data
    //* there is a special type that help you access vector or map data

    //* iterators are pointers which points to elements of vectors
    //* so, by dereferencing them, you can access to the value stored
    //* you can use them just like normal pointers
    
    
    // for vectors
    vector<int> integers(5);

    for (int i = 0; i < 5; i++)
    {
        integers[i] = 5 + i;
    }

    for (vector<int>::iterator intIter = integers.begin(); intIter != integers.end(); ++intIter)
    {
        cout << *intIter << endl;
    }

    //This code says: create an iterator, and get the first element of the vector of integers; 
    //while the iterator isn't equal to the end iterator, keep iterating through the vector.
    //Print out each element
    
    //* anything you about normal iterators, work here
    //* for example you can define it out of the loop and just use it
    
    vector<int>::iterator intIter = integers.begin();
    vector<int>::iterator end = integers.end();

    for (intIter; intIter != end; ++intIter)
    {
        cout << *intIter << endl;
    }

    // for maps
    //* for maps, we can define two iterators, one for the key and one for the value

    map<string, string> email;
    email["Farhad Jems"] = "farhadjems@gmail.com";
    email["John Doe"] = "johndoe@example.com";

    //! note that for simplicity, mehtod with the same operation has the same name
    //! in different class types

    for (map<string, string>::iterator stringItr = email.begin(), stringEnd = email.end(); stringItr != stringEnd; ++stringItr )
    {
        cout << stringItr->first /*key*/ << "'s Email: " << stringItr->second /*value*/ << endl;
    }
         
    // find method searches for the value by taking the key as an argument
    // it returns the address of memory stored the value of given key
    // since it returns an address, you can store it in an iterator
    // it returns address of end() mehtod that key doesnt exist

    map<string, string>::iterator itr = email.find("Farhad Jems");
    if (itr != email.end())
    {
        cout << itr->first << "'s Email is: " << itr->second << endl;
    }
}