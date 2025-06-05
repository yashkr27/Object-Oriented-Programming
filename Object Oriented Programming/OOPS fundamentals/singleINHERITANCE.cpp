#include<iostream>
#include<string>
using namespace std;

class scooty //parent class
{
    public:
            int topspeed;
            float mileage;
            
};

class bike: public scooty //child class(declare it public explicitly)
{
    public:
            int gears;
};

int main()
{
    bike R15;
    R15.topspeed= 10;
    R15.gears= 5;
    R15.mileage= 6.5;
    cout<<R15.topspeed<<endl;
    cout<<R15.gears<<endl;
    cout<<R15.mileage<<endl;

    return 0;
}