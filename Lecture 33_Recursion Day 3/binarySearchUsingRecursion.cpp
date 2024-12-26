#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int n, int target, int start, int end)
{
    //Base condition.
    if(start > end)
        return false;

    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
        return true;
    }

    //Processing + Recursive Call.
    if (arr[mid] > target)
    {
        return binarySearch(arr, n, target, start, mid - 1);
    }
    else
    {
        return binarySearch(arr, n, target, mid + 1, end);
    }
}

int main()
{
    int n = 0;
    int nums[100];
    cout << "Enter the size of array:-" << endl;
    cin >> n;

    cout << "Enter the " << n << "size of array elements:-" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int target;
    cout << "Enter the target element:- " << endl;
    cin >> target;

    bool found = binarySearch(nums, n, target, 0, n - 1);

    if (found)
    {
        cout << "Element found in Inputed Array :)" << endl;
    }
    else
    {
        cout << "Element not Found in Inputed Array :(" << endl;
    }

    return 0;
}