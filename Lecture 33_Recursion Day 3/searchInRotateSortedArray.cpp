#include <bits/stdc++.h>
using namespace std;

class binSearch
{
public:
    int binarySearch(int *arr, int s, int e, int target)
    {
        if (s > e)
            return -1;

        int mid = s + (e - s) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        // Processing + Recursive Call.
        if (arr[mid] > target)
        {
            return binarySearch(arr, s, mid - 1, target);
        }
        else
        {
            return binarySearch(arr, mid + 1, e, target);
        }
    }

    int findPivot(int *arr, int s, int e)
    {
        int mid = s + (e - s) / 2;
        // Base Condition
        if (s >= e)
        {
            return e;
        }

        if (arr[mid] >= arr[0])
        {
            return findPivot(arr, mid + 1, e);
        }
        else
        {
            return findPivot(arr, s, mid);
        }
    }
};
int main()
{
    int arr[100], n;
    cout << "Enter the size of n:- ";
    cin >> n;

    cout << "Enter the " << n << " size of array element(Array Must be rotated):- " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target element:- ";
    cin >> target;

    binSearch bin;

    int pivotIndex = bin.findPivot(arr, 0, n - 1);

    if (arr[pivotIndex] < target)
    {
        int index = bin.binarySearch(arr, 0, pivotIndex - 1, target);
        cout << "Target element found in the array at " << index << " Location :)" << endl;
    }
    else
    {
        int index = bin.binarySearch(arr, pivotIndex, n - 1, target);
        cout << "Target element found in the array at " << index << " Location :)" << endl;
    }
    return 0;
}