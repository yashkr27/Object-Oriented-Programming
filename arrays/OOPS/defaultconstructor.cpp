#include<iostream>
#include<string>
using namespace std;
class car   // User defined datatype
{
    public: 
        int price;
        string name;
        string color;
        int year;

        // Default constructor
        car() // Default constructor
        {
        }

        // Constructor
        car(int p, string n, string c, int y) // Constructor with parameters
        {
            price= p;
            name= n;
            color= c;
            year= y;
        }
};

void printCarDetails(car c) // Function to pass objects to functions
{
    cout<<"Car name is "<<c.name<<endl;
    cout<<"Car price is "<<c.price<<endl;
    cout<<"Car color is "<<c.color<<endl;
    cout<<"Car year is "<<c.year<<endl;
    cout<<endl;
}

int main()
{
    car c0(2000000, "BMW", "Black", 2023); // Object creation with constructor
    c0.price= 2000000;
    c0.color= "Black"; 
    c0.name= "BMW";
    c0.year= 2023;

    car c1; // Object creation without constructor
    c1.price= 1000000;
    c1.color= "White";
    c1.name= "Mercedes";
    c1.year= 2022;

    car c2(500000, "Tata", "Red", 2021); // Object creation with constructor
    /*c2.price= 500000;
    c2.color= "Red";
    c2.name= "Tata";
    c2.year= 2021; */

    printCarDetails(c0);
    printCarDetails(c1);
    printCarDetails(c2);

    return 0;
}