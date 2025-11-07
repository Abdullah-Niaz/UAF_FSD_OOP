#include <iostream>
using namespace std;

int main()
{
    int intarray[5] = {10, 20, 30, 40, 50};

    cout << "Address of intarray (constant pointer): " << intarray << endl;
    cout << "Value at intarray[0]: " << *intarray << endl;



    int *ptr = intarray; // pointer variable (can be incremented)
    cout << "\nInitial pointer address: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    
    ptr++; // moves to the next element
    cout << "\nAfter incrementing ptr:" << endl;
    cout << "New pointer address: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    // Uncommenting this line will cause a compilation error
    // intarray++; // Error ->  cannot increment a constant pointer

    return 0;
}
