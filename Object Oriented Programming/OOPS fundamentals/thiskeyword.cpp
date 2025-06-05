#include<iostream>
#include<string>
using namespace std;

class cricketer
{
    public:
        string name; 
        int runs;
    cricketer(string name, int runs)
    {
        this->name= name; // this->name is the name of the object, name is the parameter
        this->runs= runs; // this->runs is the name of the object, runs is the parameter
    } 
    
    //We only use this keyword when the parameter name and the object name are same.
    // this keyword is used to refer to the current object of the class
      
};

int main()
{
    cricketer c0("Virat Kohli", 25000); // Object creation with constructor
    cricketer c1("Rohit Sharma", 18000); // Object creation with constructor
    
    cout<<"c0 name is "<<c0.name<<endl;
    cout<<"c0 runs are "<<c0.runs<<endl;
    cout<<"c1 name is "<<c1.name<<endl;
    cout<<"c1 runs are "<<c1.runs<<endl;

return 0;
}