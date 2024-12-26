#include <bits/stdc++.h>
using namespace std;

int secondOccurance(int arr[], int end, int key)
{
    int s = 0;
    int e = end - 1;
    int mid = s + (e - s) / 2;
    int ans = 0;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}
int firstOccurance(int arr[], int end, int key)
{
    int s = 0;
    int e = end - 1;
    int mid = s + (e - s) / 2;
    int ans = 0;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}
int main()
{
    int arr[15] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5};
    cout << "given key element first occurance at index " << firstOccurance(arr, 13, 3) << " and last index at " << secondOccurance(arr, 13, 3) << endl;
    return 0;
}