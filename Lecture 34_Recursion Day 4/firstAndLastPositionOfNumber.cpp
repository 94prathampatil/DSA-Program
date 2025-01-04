#include <bits/stdc++.h>
using namespace std;

int lastPos(int *arr, int s, int e, int target, int ans)
{
    int mid = s + (e - s) / 2;
    // Base Condition

    if (s > e)
    {
        return ans;
    }

    if (arr[mid] == target)
    {
        ans = mid;
        // Searching in right Part.
        return lastPos(arr, mid + 1, e, target, ans);
    }
    if (arr[mid] < target)
    {
        // Searching in right Part.
        return lastPos(arr, mid + 1, s, target, ans);
    }
    else
    {
        // Searchin in left Part.
        return lastPos(arr, mid + 1, s, target, ans);
    }
}

int firstPos(int *arr, int s, int e, int target, int ans)
{
    int mid = s + (e - s) / 2;
    // Base Condition

    if (s > e)
    {
        return ans;
    }

    if (arr[mid] == target)
    {
        ans = mid;
        // Searching in left Part.
        return firstPos(arr, s, mid - 1, target, ans);
    }
    if (arr[mid] < target)
    {
        // Searching in right Part.
        return firstPos(arr, mid + 1, e, target, ans);
    }
    else
    {
        // Searchin in left Part.
        return firstPos(arr, s, mid - 1, target, ans);
    }
}

int main()
{
    int arr[11] = {1, 0, 0, 0, 0, 2, 2, 2, 2, 3, 4};
    int target = 2;
    // int arr[100];
    // int n = -1;
    // cout << "Enter the size of n:- ";
    // cin >> n;

    // cout << "Enter the " << n << " size of element:-";
    // for (int i = 0; i < n;i++){
    //     cin >> arr[i];
    // }

    // int target = -1;
    // cout << "Enter the target value:-";

    int pos = firstPos(arr, 0, 10, target, 0);
    int last = lastPos(arr, 0, 10, target, 0);
    cout << pos << " and " << last << endl;

    return 0;
}