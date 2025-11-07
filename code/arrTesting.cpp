#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    // 20 bytes / 4 (1 int => 4 btye) = > 5 size => element
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= arrSize; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}