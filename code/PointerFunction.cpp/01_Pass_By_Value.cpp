// In C++, there are three main ways to pass arguments to a function :
// 1. By Value
// 2. By Reference
// 3. By Pointer



// Pass by Value: 
* A copy of the variable is passed to the function.
* Changes made inside the function do not affect the original variable.

#include <bits/stdc++.h>
using namespace std;

void swapVariable(int a, int b);
void changeValue(int x);

int main()
{
    int num = 10;
    cout << "Before the Function Call: " << num << endl;
    changeValue(num);
    cout << "After the Function Call: " << num << endl;

    return 0;
}

void changeValue(int x)
{
    x = 50;
    cout << "In Function: " << x << endl;
}
