#include<iostream>
#include<string>
using namespace std;

class cricketer//parent class 1 
{
    public:
            int runs;
            int wkt;

            cricketer()
            {
                //default constructor
            }

            cricketer(int runs, int wkt) //parameterised constructors
            {
                this-> runs= runs;
                this-> wkt= wkt;
            }

        virtual void print_all_details() //virtual print function
        {
            cout<<"Total Runs-  "<<runs<<endl;
            cout<<"Total wkt's-  "<<wkt<<endl;
        }

        virtual ~cricketer() {}; //destructor
};

class engineer //parent class 2
{
    public:
            int years_exp;
            string domain;

            engineer()
            {
                //default constructor
            }

            engineer(int years_exp, string domain) //parameterised constructors
            {
                this-> years_exp= years_exp;
                this-> domain= domain;
            }

        virtual void print_all_details() //virtual print function
        {
            cout<<"Total years of experience-  "<<years_exp<<endl;
            cout<<"Domain is-   "<<domain<<endl;
        }

        virtual ~engineer() {} //destructor

};

class person: public cricketer,engineer
{
    public:
            string name;
            person()
            {
                //default constructor
            }

            person(int years_exp, string domain, int runs, int wkt, string name)
            :engineer(years_exp, domain),cricketer(runs, wkt)// calling base class constructor for both classes
            {
                this-> name= name;
            }

            void print_all_details() override//virtual print function overriding 
            {
                cricketer::print_all_details(); //calling base function from parent 1
                engineer::print_all_details();//calling base function from parent 2
                cout<<"Name is "<<name<<endl;
            }

            ~person() {} //destructor
};

int main()
{
    person yash(3, "CyberSecurity", 15000, 150, "Yuvraj");
    yash.print_all_details();

    return 0;
}