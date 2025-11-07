// Pass by Pointer
// * the address of the variable is passed.
// * the function uses a poitner to modify the orignal variables values

#include <bits/stdc++.h>
using namespace std;

void swapVariable(int *a, int *b);
void changeValue(int *x);

int main()
{
    int num = 10;
    cout << "Before the Function Call: " << num << endl;
    changeValue(&num);
    cout << "After the Function Call: " << num << endl;

    int x = 10, y = 20;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swapVariable(&x, &y);

    cout << "After swap : x = " << x << ", y = " << y << endl;

    return 0;
}

void changeValue(int *x)
{
    *x = 50;
    cout << "In Function: " << x << endl;
}

void swapVariable(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
