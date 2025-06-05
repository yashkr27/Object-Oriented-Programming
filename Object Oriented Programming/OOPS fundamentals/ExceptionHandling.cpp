#include<iostream>
using namespace std;

int main()
{
    int numerator,denominator,result;
    cout<<"Enter Numerator & Denominator"<<endl;
    cin>>numerator;
    cout<<endl;
    cin>>denominator;
    cout<<"Numerator & Denominator are "<< numerator<<" and "<<denominator<<endl; 

    try
    {
        if(denominator==0)
        {
            throw denominator;
        }
        
        result= numerator/denominator;//Division happens here so this will be where exception might occur
        //That is why we add this part to try block
        cout<<"Division is "<< result << endl; 
    }
    catch(int ex)//The thrown denominator is caught here and catch block is executed
    {
        cout<<"0 as denominator is not allowed- "<< ex<< endl;
    }

    return 0;
}