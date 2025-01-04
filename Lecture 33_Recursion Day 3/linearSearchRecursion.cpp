#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int size, int target)
{
    if (size == 0)
        return false;
    if (arr[0] == target)
        return true;

    bool found = linearSearch(arr + 1, size - 1, target);
    return found;
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

    int target = -1;
    cout << "Enter the target Element:- " << endl;
    cin >> target;

    bool found = linearSearch(nums, n, target);

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