#include<iostream>
#include<string>
using namespace std;

class understand
{
     public:

     ~understand() //destructor
     {
         cout<<"Destructor called"<<endl;
     }  //destructor is called when the object is destroyed

    void sum(int a, int b) //creating function
    {
        cout<<a+b<<endl; //here, + operator is adding numbers
    }

    void sum(string a, string b) //function overloading- same function name with diff. parameter
    {
        cout<<a + b<<endl; //here same, + operator is appending strings
    }

    //We can use the +  operator to add fractions by using operator overloading.
    
};

class fractions
{
    private:
        int num, den;
    public:
        fractions(int n, int d) //constructor
        {
            num = n;
            den = d;
        }

        void display()
        {
            cout<<num<<"/"<<den<<endl;
        }

        //operator overloading
        fractions operator + (fractions f) //syntax for operator overloading
        {
            fractions temp(0, 0);
            temp.num = (num * f.den) + (f.num * den); // a/b + c/d = (a*d + b*c) / (b*d)
            temp.den = den * f.den;
            return temp;
        }
        ~fractions() //destructor
        {
            cout<<"Destructor called"<<endl;
        } //destructor is called when the object is destroyed

};

int main()
{
    understand a;
    a.sum(2,3);
    a.sum("Yash", "Sharma");

    fractions f1(1, 2), f2(3, 4); //creating objects of class fractions
    fractions f3 = f1 + f2; //operator overloading
    f3.display(); //displaying the result

    return 0;
}
// In this code, we have overloaded the + operator to add two fractions.
// The operator function takes another fraction as an argument and returns a new fraction that is the sum of the two fractions. 
//The display function is used to print the result in the form of a fraction.