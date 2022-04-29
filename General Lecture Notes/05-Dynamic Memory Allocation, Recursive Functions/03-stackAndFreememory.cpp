#include <iostream>

using namespace std;


int main()
{
    //* One part of memory is used to store the variables that you
    //* declare in the functions that are currently being executed
    //* this part of memory is called the stack.

    //* A second part of memory is the free store (sometimes known as the heap),
    //* which is unallocated memory that you can request in chunks. 
    //* This part of memory is managed by the operating system

    //* before running the program, system will allocate some memory form stak part 

    int a = 12; // this variable is stored in stack memory
    int *p_a = &a; // this pointer is stored int stack memory
    
    //* to use free memory, you should use new command to tell system that you need memory!
    //* by using "new" you can request memory from system
    
    //* by using "new" keyword, system will return some memory addresses
    //* so, you have to use pointers for saving these memory addresses

    int *p_b = new int;
    //* here, by using "new" keyword, you have access to some amount of free memory
    //* since size of memory depends on the size of value stored in it, you have to
    //* define the type (another reason why pointers must be defined with data type)

    cout << " the address of p_b: " << p_b << endl;

    // storing integer value in pointer points to free memory
    *p_b = 15;
    cout << " value stored in free memory (using pointers): " << *p_b << endl;

    //* you can store inserted value from user inside this memory!

    cout << " enter value: ";
    cin >> *p_b;
    cout << " the value inserted by user is stored in free memory: " << *p_b << endl;

    //! note that you can request memory for any type: int, char, string, double, float, enum, structure, ....

    //* note that when you get the access to free memory, system gives you the control of 
    //* this part of memory so that when you dont need it anymore, you have to return it 
    //* to system yourself!
    //* to return this part of memory to system and clean it, use delete
    
    delete p_b; // returning the requested memory to system and clean the data stored in it

    //! note that you just return the memory requested by "new"
    //! you can use the variable (p_b) in next lines!
    //* since you returned the memory pointed by the pointer, the pointer now is not pointing
    //* its like defining variable which is not initialized!
    //* so, you cannot use it for future purposes, 
    //* to prevent any problem, initialize it with NULL

    p_b = NULL;
    
    //* if you use this pointer in next lines, running those lines will create some errors
    //* which causes program crash
    //! note that this crash is OK! since you will find out that you have used a NULL pointer
    //! you know the reason of crash
    //! if you use an empty pointer, program will crash and there will be no error comment
    //! so, finding the reason of crash is too hard! 

    //* Until p_int is freed, the memory that is pointed to will be marked as in-use and will
    //* not be given out again. If you keep allocating memory and never free it, 
    //* you will run out of memory.


    //! you can use references instead of pointers but its more complicated and not recommended
    //! note that references  should provide an additional name for a variable, not storage for
    //! dynamically allocated memory.

}