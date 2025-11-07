#include <bits/stdc++.h>
using namespace std;

// void directSwap(char a, char b)
// {
//     char temp = a; // "y"
//     a = b; // "n"
//     b = temp;
//     cout << "Value of a: " << a << endl;
//     cout << "Value of b: " << b << endl;
// }

void IndirectSwap(char *Ptr1, char *Ptr2);

int main()
{
    char a = 'y';
    char b = 'n';

    cout << "Value of a & b Before any Swap" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    cout << "============================" << endl;
    cout << "Value of a & b after Direct Swap" << endl;
    directSwap(a, b);
    cout << "============================" << endl;

    IndirectSwap(&a, &b);

    cout << "Value of a & b after Indirect Swap" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    return 0;
}

void IndirectSwap(char *Ptr1, char *Ptr2)
{
    char temp = *Ptr1; // ptr1 = 'y'
    *Ptr1 = *Ptr2;  // 'n'
    *Ptr2 = temp; // 'y'
}