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

    car(int price, string name, string color, int year) // Constructor with parameters
    {
        this->price= price;
        this->name= name;
        this->color= color;
        this->year= year;
    }

    void printCarDetails(int i) // Function in class to pass objects to functions
{

    cout<<"Car name is "<<name<<endl;
    cout<<"Car price is "<<price<<endl;
    cout<<"Car color is "<<color<<endl;
    cout<<"Car year is "<<year<<endl;
    cout<<i<< endl;
    cout<<endl;
}

void knowavg()
{
    long double avg= 0;
    avg= (price+year)/2.00;
    cout<<"The avg is "<< avg<<endl; // Average of price and year
}

        
};

int main()
{
    car c0(2000000, "BMW", "Black", 2023); // Object creation with constructor
    car c1(1000000, "Mercedes", "White", 2022); // Object creation with constructor
    car c2(500000, "Tata", "Red", 2021); // Object creation with constructor
    

    c0.color= "Red"; // Changing color of c0 object through object name in main function
    c0.printCarDetails(89); 
    // Function to pass objects to functions
    c1.printCarDetails(90);
    c2.printCarDetails(91);
    c0.knowavg(); // Function to calculate average of price and year
    return 0;
}