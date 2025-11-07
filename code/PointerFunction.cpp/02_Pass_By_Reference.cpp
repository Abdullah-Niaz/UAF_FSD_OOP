// Pass by Reference
// * A reference(alias) to the original vairable is passed
// * Any change made inside the function affects the orignal variable.

#include <bits/stdc++.h>
using namespace std;

void swapVariable(int &a, int &b);
void changeValue(int &x);

int main()
{
    int num = 10;
    cout << "Before the Function Call: " << num << endl;
    changeValue(num);
    cout << "After the Function Call: " << num << endl;

    return 0;
}

void changeValue(int &x)
{
    x = 50;
    cout << "In Function: " << x << endl;
}
