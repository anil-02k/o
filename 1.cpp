// An electricity board charges the following rates to domestic users to discourage large consumption of energy.
//  For the first 100 units: - 60 P per unit
//  For the next 200 units: -80 P per unit
//  Beyond 300 units: -90 P per unit
//  All users are charged a minimum of Rs 50 if the total amount is more than Rs 300 then an additional surcharge of 15% is added.
//  Implement a C++ program to read the names of users and number of units consumed and display the charges with names

#include <iostream>
#include <string>
using namespace std;
struct users
{
    string name;
    int units;
    double charges;
public:
    void getdata()
    {
        cout << "Enter name of user: ";
        cin >> name;
        cout << "Enter number of units consumed: ";
        cin >> units;
    }
    void putdata()
    {
        cout << "Name: " << name << endl;
        cout << "Units consumed: " << units << endl;
        if(units <= 100){
            charges = 60 * units;
        }
        else if(units <= 300){
            charges = 60 * 100 + 80 * (units - 100);
        }
        else{
            charges = 60 * 100 + 80 * 200 + 90 * (units- 300);
        }
        if(charges<50){
            charges = 50;
        }
        if(charges > 300){
            charges = charges + (charges * 15 / 100);
        }
        cout << "Charges: " << charges << endl;
    }
}; 
int main()
{
    users aa;
    aa.getdata();
    aa.putdata();

    return 0;
}


// OUTPUT:
// Enter name of user: ANIL
// Enter number of units consumed: 2000
// Name: ANIL
// Units consumed: 2000
// Charges: 201250

