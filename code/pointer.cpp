#include <bits/stdc++.h>
using namespace std;

// A pointer to pointer is exactly what it sounds like — a pointer that stores the address of another pointer.
void pointers();
void dynamicMemoryArray();

int main()
{

    pointers();
    dynamicMemoryArray();
    return 0;
}

void pointers()
{
    int a = 10;    // Normal variable
    int *p = &a;   // Pointer to int
    int **pp = &p; // Pointer to pointer to int

    cout << "Value of a      : " << a << endl;
    cout << "Address of a    : " << &a << endl;
    cout << "Value of p (&a) : " << p << endl;
    cout << "Value of *p     : " << *p << endl;

    cout << "Value of pp (&p): " << pp << endl;   // hold the address of p
    cout << "Value of *pp (p): " << *pp << endl;  // value of pointer (holds the address of pointer *p)
    cout << "Value of **pp   : " << **pp << endl; // derefrencing of pointer to pointer
}

// Dynamic Memory (2D arrays)

void dynamicMemoryArray()
{
    int **arr = new int *[3]; // array of 3 int pointers

    // allocate columns to make it 2D
    for (int i = 0; i < 3; i++)
    {
        arr[i] = new int[4]; // each row has 4 integers
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}