#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int firstArrayLen = mid - s + 1;
    int secondArrayLen = e - mid;

    int *firstArray = new int[firstArrayLen];
    int *secondArray = new int[secondArrayLen];

    int originalArrayIndex = s;
    for (int i = 0; i < firstArrayLen; i++)
    {
        firstArray[i] = arr[originalArrayIndex++];
    }

    originalArrayIndex = mid + 1;
    for (int i = 0; i < secondArrayLen; i++)
    {
        secondArray[i] = arr[originalArrayIndex++];
    }

    // Merge two arrays;
    int index1 = 0;
    int index2 = 0;
    originalArrayIndex = s;
    while (index1 < firstArrayLen && index2 < secondArrayLen)
    {
        if (firstArray[index1] < secondArray[index2])
        {
            arr[originalArrayIndex++] = firstArray[index1++];
        }
        else
        {
            arr[originalArrayIndex++] = secondArray[index2++];
        }
    }

    while (index1 < firstArrayLen)
    {
        arr[originalArrayIndex++] = firstArray[index1++];
    }

    while (index2 < secondArrayLen)
    {
        arr[originalArrayIndex++] = secondArray[index2++];
    }

    delete[] firstArray;
    delete[] secondArray;
}

void mergeSort(int *arr, int s, int e)
{
    // Base Condition;

    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;

    // Left Part sorting;
    mergeSort(arr, s, mid);

    // Right Part sorting;
    mergeSort(arr, mid + 1, e);

    // Finally array merge karaycha ahe
    merge(arr, s, e);
}
int main()
{
    int arr[100];
    int n = 0;
    cout << "Enter the value of n:- ";
    cin >> n;

    cout << "Enter the " << n << " number of Elements:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}