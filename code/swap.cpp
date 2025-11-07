#include <bits/stdc++.h>
using namespace std;

void directSwap(char a, char b)
{
    char temp = a;
    a = b;
    b = temp;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
}
void IndirectSwap(char *Ptr1, char *Ptr2)
{
    char temp = *Ptr1;
    *Ptr1 = *Ptr2;
    *Ptr2 = temp;
}
int main()
{
    char a = 'y';
    char b = 'n';

    cout << "Value of a & b Before any Swap" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "============================" << endl;

    IndirectSwap(&a, &b);
    cout << "Value of a & b after Indirect Swap" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    cout << "============================" << endl;
    cout << "Value of a & b after Direct Swap" << endl;
    directSwap(a, b);
    return 0;
}
