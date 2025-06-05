#include<iostream>
#include<string>
using namespace std;

class vehicle //parent class
{
    public: //access modifier 
            int Tspeed; //member variable
            float Mileage;//member variable
            string name;//member variable
            
            vehicle()
            {
                //Default Constructor
            }

            vehicle(int Tspeed, float Mileage, string name) //parameterized constructor
            {
                this->Tspeed=Tspeed;
                this->Mileage=Mileage;
                this->name=name;
            }

            virtual void print_all_details() //creating a virtual function that can be overridden 
            {
                cout<<"Top Speed- "<<Tspeed<<endl;
                cout<<"Mileage- "<<Mileage<<endl;
                cout<<"Name- "<<name<<endl;
            }


};

class two_wheeler: public vehicle   //child class(declare it public explicitly)
{
    public:
            using vehicle:: vehicle;  //Inheriting all constructors from vehicle
            float bootstrap; //member variable

            two_wheeler(int Tspeed, float Mileage, string name, float bootstrap)
            : vehicle(Tspeed, Mileage, name) //calling base class constructor
            {
                this->bootstrap= bootstrap;
            }

            two_wheeler()
            {
                //Default Constructor
            }

            void print_all_details() override //overriding virtual function to add further parameters
            {
                vehicle::print_all_details(); //call base class functiom
                cout<<"Bootstrap- "<<bootstrap<<endl;
            }
};

class scooty: public two_wheeler //grandchild class(declare it public explicitly)
{
    public:
            using two_wheeler::two_wheeler; //inheriting all constructors from two wheeler
            int battery_backup; //member variable
            
            scooty(int Tspeed, float Mileage, string name, float bootstrap, int battery_backup)
            : two_wheeler(Tspeed, Mileage, name, bootstrap) //calling base class constructor
            {
                this->battery_backup= battery_backup;
            }
            
            scooty()
            {
                //Default Constructor
            }

            void print_all_details() override //overriding virtual function to add further parameters
            {
                two_wheeler::print_all_details(); //call base class functiom
                cout<<"Battery_backup- "<<battery_backup<<endl;
                cout<<endl;
            }
};

class bike: public two_wheeler //grandchild class(declare it public explicitly)
{
    public:
            using two_wheeler::two_wheeler; ////inheriting all constructors from two wheeler
            int gears; //member variable

            bike(int Tspeed, float Mileage, string name, float bootstrap, int gears)
            : two_wheeler(Tspeed, Mileage, name, bootstrap) //calling base class constructor
            {
                this->gears= gears;
            }
            
            bike()
            {
                //Default Constructor
            }

            void print_all_details() override //overriding virtual function to add further parameters
            {
                two_wheeler::print_all_details(); //call base class functiom
                cout<<"Gears- "<<gears<<endl<<endl;
            }
            
};

int main()
{
    bike Yamaha;    //object of grandchild class
    
    Yamaha.bootstrap= 7; //child class member variable accessed
    Yamaha.Mileage=11.5; //parent class member variable accessed
    Yamaha.name= "R15"; //parent class member variable accessed
    Yamaha.Tspeed=150; //parent class member variable accessed
    Yamaha.gears= 7; //grandchild class member variable accessed

    scooty Activa(80, 30.5, "Activa R6", 5.4, 5); //object of grandchild class
    Yamaha.print_all_details();
    Activa.print_all_details();

    return 0;

}