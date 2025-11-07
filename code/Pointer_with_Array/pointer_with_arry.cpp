#include <bits/stdc++.h>
using namespace std;

int main()
{
    int intarray[5] = {31, 54, 77, 52, 93};
    cout << "Acessing with constant" << endl;
    for (int j = 0; j < 5; j++)
    {
        cout << *(intarray + j) << endl;
    }

    int *parray = intarray;
    cout << "Acessing with pointer" << endl;
    for (int j = 0; j < 5; j++)
    {
        cout << *(parray++) << endl;
    }

    return 0;
}
