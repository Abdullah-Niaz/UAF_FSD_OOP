#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 3.14;
    char c = 'A';

    void *ptr; // void pointer declaration

    ptr = &a;
    cout << "Value of a: " << *(int *)ptr << endl;

    ptr = &b;
    cout << "Value of b: " << *(float *)ptr << endl;

    ptr = &c;
    cout << "Value of c: " << *(char *)ptr << endl;

    return 0;
}
