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
        
};

void printCarDetails(car c) // Function to pass objects to functions
{
    cout<<"Car name is "<<c.name<<endl;
    cout<<"Car price is "<<c.price<<endl;
    cout<<"Car color is "<<c.color<<endl;
    cout<<"Car year is "<<c.year<<endl;
    cout<<endl;

    void change()
    {
        c0
    }
}

int main()
{
    car c0;
    c0.price= 2000000;
    c0.color= "Black"; 
    c0.name= "BMW";
    c0.year= 2023;

    car c1;
    c1.price= 1000000;
    c1.color= "White";
    c1.name= "Mercedes";
    c1.year= 2022;

    car c2;
    c2.price= 500000;
    c2.color= "Red";
    c2.name= "Tata";
    c2.year= 2021;

    printCarDetails(c0);
    printCarDetails(c1);
    printCarDetails(c2);

    return 0;
}