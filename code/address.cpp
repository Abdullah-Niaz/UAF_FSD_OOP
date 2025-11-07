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
    int price = 1000; 
    cout << "Value of a: " << price << endl;
    cout << "Address of a: " << &price << endl;
}