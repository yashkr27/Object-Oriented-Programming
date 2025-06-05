#include<iostream>
#include<string>
using namespace std;

class student
{
    public: // Value can be printed or accessed outside the class
        int Rno;
        string name;

    student() //default constructor
    {

    }

    student(int Rno, string name, float marks) //Parameterised Constructor
    {
        this->Rno= Rno;
        this->name= name;
        this->marks= marks;        
    }

    void display()
    {
        cout << "Roll No: " << Rno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout<<endl;
    }

    float getmarks() //getter function
    {
        return marks;
    }

    void setmarks(float m) //setter function
    {
        marks=m;
    }

    private:    //value cannot be printed or accessed outside the class
        float marks;

};

int main()
{
    student Yash;
    Yash.Rno= 23;
    Yash.name= "Yash Kr. Singh";
    //Yash.marks= 6.3;  //error because int marks is under private access; hence cannot be accessed outside class

    student Rahul(28, "Rahul Kr. Shaw", 7.9);// This is no error because here marks is accessed within the class due to the constructor and this keyword
    cout<<Rahul.getmarks()<<endl; //getter function
    cout<<endl;

    Rahul.display();//This works because of object creation with parameterised constructor
    //Yash.display();
    //The above yash.display should have worked but,since no yash marks value is set it will throw an error

    //To deal with this we need a setter program

    Yash.setmarks(6.36); //using the setter function to set yash marks
    Yash.display(); //now it will work
    cout<<endl;

    //we can also use it to change marks of objects-

    Rahul.setmarks(9.5);
    cout<<Rahul.getmarks()<<endl;

    Yash.setmarks(6.8);
    cout<<Yash.getmarks()<<endl;



    return 0;
}