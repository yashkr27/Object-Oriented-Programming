#include<iostream>
#include<cstring>  // Include for strcpy
using namespace std;

union money {
    int rice;
    char favcar[50];  // C-style string
    float salary;
};

int main() {
    union money yash1;

    yash1.rice = 34;
    cout << "Rice: " << yash1.rice << endl;

    // Assign the favcar member (C-style string)
    strcpy(yash1.favcar, "Chevvy");
    cout << "Favorite Car: " << yash1.favcar << endl;
 
    yash1.salary = 345678.12;
    cout << "Salary: " << yash1.salary << endl;

    return 0;
}
