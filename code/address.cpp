#include <bits/stdc++.h>
using namespace std;

void memoryAddress();

int main()
{
    memoryAddress();
    return 0;
}

void memoryAddress()
{
    int a = 100;
    int *p;
    p = &a;
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
}