#include <iostream>

using namespace std;

//* Structures allow you to store different values in variables under the same variable name.
//* Structures are useful whenever several pieces of data need to be grouped together.
//* Structure is a compound type

// struct <name>
// {
    // /* data */
// };

struct IdealGas
{
    double T;
    double P;
    double R;
    double rho;

};
//* here, T, P, and rho are fields of this structure

//----------------
IdealGas getGasInfo()
{
    IdealGas gas;
    cout << " enter gas temperature: ";
    cin >> gas.T;

    cout << " enter gas pressure: ";
    cin >> gas.P;
    
    cout << " enter gas Molar Mass: ";
    double molarMass = 0;
    cin >> molarMass;
    gas.R = 8.314 * molarMass;

    return gas;
}

IdealGas computeDensity(IdealGas gas)
{
    gas.rho = gas.P / (gas.T * gas.R);
    return gas;
}

int main()
{
    IdealGas air;
    air.T = 300;
    air.P = 101325;
    air.R = 8.314 * 28.9;
    air.rho = air.P / (air.T * air.R);
    cout << " the air density is: " << air.rho << endl;


    //* you can create an array of structured type
    IdealGas mixture[5];
    mixture[0].T = 300;
    mixture[1].T = 273;

    //* you can reate functions with the structured type and return the structured variable!
    IdealGas waterVapor = getGasInfo();

    //* you can use structured variable as an argument to function
    waterVapor = computeDensity(waterVapor);
    //! When a structure is passed into a function, it will be copied 
    //! (just like when we returned a structure), so any changes made 
    //! to the structure in the function will be lost! 
    //! That’s why this function needs to return a copy of the structure 
    //! after modifying it—the original structure has not been changed
}