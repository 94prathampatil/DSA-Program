#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[100][100];
    int row = 0, col = 0;
    cout << "Enter the number rows and columns:- ";
    cin >> row >> col;

    int i = 0;
    int j = 0;
    while (i < row)
    {
        cin >> nums[i][j];
        j++;
        if (j == col)
        {
            i++;
            j = 0;
        }
    }
    return 0;
}