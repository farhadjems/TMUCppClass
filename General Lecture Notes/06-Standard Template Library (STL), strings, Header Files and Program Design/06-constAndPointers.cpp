#include <iostream> 

using namespace std;

int main()
{
    //* below, we have a normal variable
    int a = 12;
    //* the below pointer is pointing to a normal variable
    int* p_a = &a;
    //* you can change value stored in a using p_a
    *p_a = 24;
    //* you can also change the address stored in p_a
    p_a = new int;

    //* below variable is a pointer to const, means that you cant change
    //* the value stored in the address kept by pointer
    //* it is considered as const ( doesnt matter the address itslef is const or not)  
    const int* pc_a = &a;
    
    //! you can't change the value stored in the address kept by pointer
    // *pc_a = 12; // compiler error
    //! but you can change it directly using the variable itself
    a = 12;

    //! you can change the address stored in pointer
    //! yes, the pointer itself is not a const,
    //!  so you can change its stored value ( which is an address)
    pc_a = new int;

    //---------------------------------
    //* below variable is a const pointer, meaning that you cant change the address stored in it
    //* but if the stored address is not related to a const variable you can change the value
    //* stored in the address kept by the pointer
    int* const cp_a = &a;

    //! since "a" is not a const variable, and cp_a doesnt consider it as a const variable
    //! you change the value of "a" using "cp_a"
    *cp_a = 24;
    
    //! but note that, this is a const variable, meaning that you cant change the value stored in it
    //! the value stored in this pointer is the address of variable "a"
    //! in other words, "cp_a" cant point to any other variable
    //! or cant store any other address
    // cp_a = new int; // compiler error - cp_a is a const variable

    //---------------------------------
    //* below variable is a const pointer that is pointing to a variable 
    //* which is considered as a const variable
    //* it means that you cant change the variable stored in pointer
    //* and you cant change the value stored in the address kept by pointer
    const int* const cpc_a = &a;

    // *cpc_a = 24; // compiler error- pointing to a considered const variable
    // cpc_a = new int; // compiler error - changing the value stored in the const variable
}