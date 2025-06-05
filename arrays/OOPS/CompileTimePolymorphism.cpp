#include<iostream>
#include<string>
using namespace std;

class loading //Not always necessary to add a member in class
{
    public:
            void sum(int a, int b) //creating function
            {
                cout<<a+b<<endl;
            }

            void sum(int a, int b, int c) //function overloading- same function name with diff. parameter
            {
                cout<<a+b+c<<endl;
            }

            void sum(string a, string b) //function overloading- same function name with diff. parameter
            {
                cout<<a + b<<endl;
            }

            //this shows error because function signature is diff.
            /*int sum(int a, int b) 
            {
                cout<<a+b<<endl;
            }*/
};

int main()
{
    loading a;
    a.sum(2,3);
    a.sum(2,3,4);
    a.sum("Yash", "Sharma");

    return 0;

}