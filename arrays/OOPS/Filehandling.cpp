#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char arr[100];
    cout<<"Enter name & age"<<endl;
    cin.getline(arr,100);

     ofstream myfile("xyz.txt", ios::app);//ios::app is for appending new content instead of overwriting each time
    // myfile.open("xyz.txt"); // no need as file is open by default
    myfile<<arr;
    myfile.close();
    cout<<"File Write operation succesfully completed"<<endl<<endl;

    cout<<"READING from File operation-"<<endl;
    char arr1[100];
    ifstream myfileobj("xyz.txt");
    myfileobj.getline(arr1,100);
    cout<<"File Content - "<<arr1<<endl;
    cout<<"File read ops succesful";
    myfileobj.close();

    return 0;
}