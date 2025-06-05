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

        // Constructor
        car(int p, string n, string c, int y) // Constructor with parameters
        {
            price= p;
            name= n;
            color= c;
            year= y;
        }
};


int main()
{
    //car c0(2000000, "BMW", "Black", 2023); // Object creation with constructor

   int* p= new int[10];
   p[0]= 10;
   p[1]= 20;
   p[2]= 30;
   p[3]= 40;

   cout<<*(p+0) <<endl; 
   cout<<*(p+1) <<endl; 
   // Dynamic memory allocation for integer

    return 0;
}