#include <bits/stdc++.h>
using namespace std;

bool searchElement(int arr[][4], int element, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == element)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    // Creating 2d Array
    int arr[3][4];

    // Input for 2D Array.
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
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int ele;
    cout << "Enter the Search element :-";
    cin >> ele;

    if (searchElement(arr, ele, 3, 4))
    {
        cout << "Element found in the array" << endl;
    }
    else
    {
        cout << "Element not found in the array" << endl;
    }
    return 0;
}