#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool reaminingPart = isSorted(arr + 1, size - 1);
        return reaminingPart;
    }
}
int main()
{
    int arr[7] = {2, 4, 6, 8, 11, 12, 14};
    int size = 6;

    bool ans = isSorted(arr, size);

    if (ans)
    {
        cout << "Array is Sorted :)" << endl;
    }
    else
    {
        cout << "Array is not Sorted :(" << endl;
    }
    return 0;
}