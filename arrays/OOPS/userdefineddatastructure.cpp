#include<iostream>
using namespace std;

class Vector
{
    public:
            int size;
            int capacity;
            int* arr; // Pointer to integer array
            
            // Constructor to initialize the vector
            Vector()
            {
                size= 0;
                capacity= 1;
                arr= new int[capacity]; // Dynamic memory allocation for integer
            }     

            //code for destructor
            ~Vector()
            {
                delete[] arr;
                arr = nullptr;
            }

              // Overloading the operator[] to access elements like in an array
            int& operator[](int index)
            {
                if (index >= 0 && index < size)  // Make sure the index is within bounds
                    return arr[index];
                else
                {   
                    // Handle out-of-bounds access
                    throw out_of_range("Index out of range!");
                }
            }
            
            void push_back(int element)
            {
                if(size== capacity) // If size is equal to capacity, then double the capacity
                {
                    int* arr2= new int[2*capacity]; // Create a new array with double the capacity
                    for(int i= 0; i< size; i++)
                    {
                        arr2[i]= arr[i]; // Copy elements from old array to new array
                    }
                    delete[] arr; //frees up old array space
                    arr= arr2; // Point arr to new array
                    capacity*= 2; // Double the capacity
                    }
                    arr[size++]= element; // Add element to the end of the array
            }

            void pop_out()
            {
                if(size==0)
                {
                    cout<<"Array is empty"<<endl;
                return;
                }
                size--;
            
            }


            void print()
            {
                if(size==0)
                {
                    cout<<"Array is empty"<<endl;
                    return;
                }
                for(int i=0; i<size;i++)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }

            int getindx(int index)
            {
                if(size==0)
                {
                    cout<<"Array is empty"<<endl;
                    return -1;
                }
                if(index>=size||index<0)
                {
                    cout<<"Invalid Index"<<endl;
                    return -1;
                }
                return arr[index];

            }
};


int main()
{
    cout<<"start"<<endl;
    Vector v;
    cout<<v.capacity<<" "<<v.size<<endl;
    v.push_back(10);
    v.print();
    cout<<v.capacity<<" "<<v.size<<endl;
    v.push_back(15);
    v.print();
    cout<<v.capacity<<" "<<v.size<<endl;
    v.push_back(11);
    v.print();
    cout<<v.capacity<<" "<<v.size<<endl;
    v.push_back(12);
    v.print();
    cout<<v.capacity<<" "<<v.size<<endl;
    v.push_back(16);
    v.print();
    cout<<v.capacity<<" "<<v.size<<endl;

    v[4] = 18;
    v.print();
    cout<<v.capacity<<" "<<v.size<<endl;

    cout<<v.getindx(0);
    cout<<endl;
    cout<<v.getindx(1)<<endl;
    cout<<v.getindx(2)<<endl;

    v.pop_out();
    v.print();
    cout<<v.capacity<<" "<<v.size<<endl;

    cout<<endl;
    cout<<endl;
    cout<<"end";
    return 0;
}