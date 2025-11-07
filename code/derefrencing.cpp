#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 100, b = 88, c = 8;
    
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;

    p2 = p1; // p2 points to a -> (address of p1 ) -> derefrencing karny par 100

    b = *p3; // assign c to b ->(value of p3 which is 8(c))

    *p2 = *p3; // assign c to a  -> 100 ko override kar dea ab -> 8 ho gi

    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of c: " << c << endl;

    cout << "Value of p1: " << p1 << endl;
    cout << "Value of p2: " << p2 << endl;
    cout << "Value of p3: " << p3 << endl;

    cout << "Value of p1: " << *p1 << endl;
    cout << "Value of p2: " << *p2 << endl;
    cout << "Value of p3: " << *p3 << endl;

    return 0;
}