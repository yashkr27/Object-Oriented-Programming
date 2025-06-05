#include<iostream>
#include<string>
using namespace std;

class car   // User-defined datatype
{
public: 
    int price;
    string name;
    string color;
    int year;

    // Constructor
    car(int p, string n, string c, int y)
    {
        price = p;
        name = n;
        color = c;
        year = y;
    }

    // Prints this car's details
    void printCarDetails()
    {
        cout << "Car name is " << name << endl;
        cout << "Car price is " << price << endl;
        cout << "Car color is " << color << endl;
        cout << "Car year is " << year << endl;
        cout << endl;
    }

    // Changes this car's details
    void changecardetails()
    {
        color = "Red";
        price = 1800000;
    }
};

int main()
{
    car c0(2000000, "BMW", "Black", 2023);
    car c1(1000000, "Mercedes", "White", 2022);
    car c2(500000, "Tata", "Red", 2021);

    car* p1 = &c0; // Pointer to c0
    car* p2 = &c1; // Pointer to c1
    car* p3 = &c2; // Pointer to c2

    cout << "Address of c0 is " << &c0 << endl;
    cout << "Address of c0 but thru pointer is " << p1 << endl;
    cout << endl;

    // Modify c1's price through pointer
    p2->price = 1200000;

    // Print details using member function (clean way)
    p1->printCarDetails(); // Print c0 details
    p2->printCarDetails(); // Print c1 details
    p3->printCarDetails(); // Print c2 details

    // Change car details using pointer
    p1->changecardetails(); // Change c0 details

    cout << "After changing car details using pointer: " << endl;
    c0.printCarDetails(); // Print updated c0 details

    return 0;
}
