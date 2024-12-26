#include <bits/stdc++.h>
using namespace std;

void arraySum(int arr[][4], int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of " << i << "row is:" << sum << endl;
    }
}

int main()
{
    // Declaring the array
    int arr[3][4];
    cout << "Enter the Array Elements:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }

    cout << "The Array sum is:- " << endl;
    arraySum(arr, 3, 4);
    return 0;
}