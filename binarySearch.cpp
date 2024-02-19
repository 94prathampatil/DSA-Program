#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, a[100], target = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the element you want to search:-" << endl;
    cin >> target;

    int start = 0, end = n - 1, mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (a[mid] == target)
        {
            cout << "Element found at " << mid << " Location....:)";
            return 0;
        }

        if (target > a[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start(end - start) / 2;
    }
    cout << "element not found in the array..:(";

    return 0;
}