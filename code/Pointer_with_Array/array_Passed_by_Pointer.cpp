#include <iostream>
using namespace std;

const int MAX = 5;

// Function declaration
void centimize(double *ptrd);

int main()
{

    double varray[MAX] = {10.0, 43.1, 95.9, 59.7, 87.3};

    // Convert inches to centimeters
    centimize(varray);

    // Display the converted values
    for (int j = 0; j < MAX; j++)
    {
        cout << "varray[" << j << "] = " << varray[j] << " centimeters" << endl;
    }

    return 0;
}

// Function definition
void centimize(double *ptrd)
{
    for (int j = 0; j < MAX; j++)
    {
        *ptrd = *ptrd * 2.54; // convert each element
        ptrd++;               // move to next array element
    }
}










// int a =  10 stack compile exectulable stack 
// int a = new 10 stack a value headl address stack 