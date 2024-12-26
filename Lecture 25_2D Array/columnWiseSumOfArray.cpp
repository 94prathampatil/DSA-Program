#include <bits/stdc++.h>
using namespace std;

void arraySum(int arr[][3], int row, int col)
{
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of " << j << "row is:" << sum << endl;
    }
}

int main()
{
    // Declaring the array
    int arr[3][3];
    cout << "Enter the Array Elements:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The Array sum is:- " << endl;
    arraySum(arr, 3, 3);
    return 0;
}