#include <iostream>
using namespace std;

int main() {
    int marks[] = {2, 4, 5, 6};
  /*  cout << "Marks are:" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout<< marks[];
*/
// pointers and arrays

int *p= marks;
cout<<"The value of marks[0] is - "<< endl;
cout<<*p+2;

return 0;
}