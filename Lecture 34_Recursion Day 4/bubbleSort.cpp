#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    // Base Condition.
    if (n == 0 || n == 1)
    {
        return;
        }

    // Put Larget Element at right Position.
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    bubbleSort(arr, n - 1);
}
int main()
{
    int arr[100];
    int n = -1;
    cout << "Enter the size of Array:- " << endl;
    cin >> n;
    cout << "Enter the " << n << " numbers to array" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}