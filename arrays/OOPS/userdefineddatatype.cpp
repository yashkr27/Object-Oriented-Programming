#include<iostream>
#include<string>
using namespace std;

class student // User defined datatype
{
    public:
        int Rno;
        string name;
        float Gpa;
        int marks[5];
};

int main()
{
    student S1;
    S1.Rno= 270204;   
    S1.name = "Yash";
    S1.Gpa= 9.5;
    S1.marks[0]= 90;
    S1.marks[1]= 95;
    S1.marks[2]= 95;
    S1.marks[3]= 100;
    S1.marks[4]= 95;
    cout<<"S1's Roll No is "<<S1.Rno<<endl; 
    cout<<"S1's name is "<<S1.name<<endl;
    cout<<"S1's Gpa is "<<S1.Gpa<<endl;
    cout<<"S1's marks are "<<S1.marks[0]<<" "<<S1.marks[1]<<" "<<S1.marks[2]<<" "<<S1.marks[3]<<" "<<S1.marks[4]<<endl;
    cout<<endl;
    
    student S2;
    S2.Rno= 270205;
    S2.name= "Shubham";
    S2.Gpa= 9.0;
    S2.marks[0]= 90;
    S2.marks[1]= 95;
    S2.marks[2]= 95;
    S2.marks[3]= 100;
    S2.marks[4]= 95;
    cout<<"S2's Roll No is "<<S2.Rno<<endl;
    cout<<"S2's name is "<<S2.name<<endl;
    cout<<"S2's Gpa is "<<S2.Gpa<<endl;
    cout<<"S2's marks are "<<S2.marks[0]<<" "<<S2.marks[1]<<" "<<S2.marks[2]<<" "<<S2.marks[3]<<" "<<S2.marks[4]<<endl;

    return 0;
}