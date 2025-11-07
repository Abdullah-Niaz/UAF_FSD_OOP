#include <bits/stdc++.h>
using namespace std;

// A pointer to pointer is exactly what it sounds like — a pointer that stores the address of another pointer.
void dynamicMemoryArray();

int main()
{

    dynamicMemoryArray();
    return 0;
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

    // initialize some values
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = i + j;
        }
    }

    // print them
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
    }

    // free up the memory
    for (int i = 0; i < 3; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
    // cout << "Memory freed";
}