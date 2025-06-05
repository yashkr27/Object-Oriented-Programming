#include<iostream>
#include<string>
using namespace std;

typedef struct employee
    {
        int Eid;
        string favfood;
        float salary;
    } emp;

int main()  
    {
        struct employee yash;
        yash.Eid= 270204;
        yash.favfood= "Butter Chicken";
        yash.salary= 30000.5;
        
        cout<<"Yash's Employee ID is "<<yash.Eid<<endl;
        cout<<"Yash's Favfood is "<<yash.favfood<<endl;
        cout<<"Yash's salary is "<<yash.salary<<endl;

        emp shubham;
        shubham.Eid= 260204;
        shubham.favfood="Mutton Curry";
        shubham.salary= 20000;

        cout<<"shubham's Employee ID is "<<shubham.Eid<<endl;
        cout<<"shubham's Favfood is "<<shubham.favfood<<endl;
        cout<<"shubham's salary is "<<shubham.salary<<endl;

        return 0;
    }