#include <iostream>
using namespace std;

/*
------------------------------------------------------------
📘  POINTER ARITHMETIC – COMPLETE EXAMPLES & EXPLANATION
------------------------------------------------------------

Pointer arithmetic allows movement of pointers through memory
based on the size of the data type they point to.

Operations allowed on pointers:
1. Increment (ptr++)
2. Decrement (ptr--)
3. Add an integer (ptr + n)
4. Subtract an integer (ptr - n)
5. Subtract one pointer from another (ptr2 - ptr1)
6. Compare pointers (ptr1 == ptr2, ptr1 < ptr2, etc.)

When a pointer is incremented or decremented,
it changes by the size (in bytes) of the data type it points to.

For example:
    int    → 4 bytes
    float  → 4 bytes
    double → 8 bytes
    char   → 1 byte
------------------------------------------------------------
*/

int main()
{

    cout << "-------------------------------------------\n";
    cout << "1️⃣  Example 1: Integer Pointer Increment\n";
    cout << "-------------------------------------------\n";

    int num1 = 0;
    int *iptr = &num1;

    cout << "Address before increment: " << iptr << endl;
    iptr++; // moves by sizeof(int) = 4 bytes
    cout << "Address after increment : " << iptr << endl
         << endl;

    cout << "-------------------------------------------\n";
    cout << "2️⃣  Example 2: Double Pointer Increment\n";
    cout << "-------------------------------------------\n";

    double *dptr = (double *)1000; // hypothetical address
    dptr++;                        // moves by 8 bytes (double = 8 bytes)
    cout << "If ptr = 1000, after ptr++ → 1000 + 1×8 = 1008\n\n";

    cout << "-------------------------------------------\n";
    cout << "3️⃣  Example 3: Float Pointer Addition\n";
    cout << "-------------------------------------------\n";

    float *fptr = (float *)1000; // hypothetical address
    fptr += 3;                   // moves by 3 × sizeof(float) = 3 × 4 = 12 bytes
    cout << "If ptr = 1000, after ptr += 3 → 1000 + 3×4 = 1012\n\n";

    cout << "-------------------------------------------\n";
    cout << "4️⃣  Example 4: Pointer Subtraction & Comparison\n";
    cout << "-------------------------------------------\n";

    int arr[5] = {10, 20, 30, 40, 50};
    int *p1 = &arr[1]; // points to 20
    int *p2 = &arr[4]; // points to 50

    cout << "Address of p1 (arr[1]): " << p1 << endl;
    cout << "Address of p2 (arr[4]): " << p2 << endl;
    cout << "Difference (p2 - p1): " << (p2 - p1) << " elements apart\n";

    if (p1 < p2)
        cout << "p1 points to an earlier element than p2.\n";
    else
        cout << "p1 points to a later element than p2.\n";

    cout << "\n-------------------------------------------\n";
    cout << "✅ End of Pointer Arithmetic Examples\n";
    cout << "-------------------------------------------\n";

    return 0;
}
