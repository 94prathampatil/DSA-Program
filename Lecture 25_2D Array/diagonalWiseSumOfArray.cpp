#include<bits/stdc++.h>
using namespace std;

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

    //Diagonal Sum from starting.

    cout << "Sum of Diagonal from starting:- " << endl;
    int i = 0, sum = 0;
    for (int j = 0; j < 3 && i < 3;j++){
        sum += arr[i++][j];
    }

    cout << "Sum of Diagonal from Ending:- " << endl;
    int j = 2, sumEnd = 0;

    for (int i = 0; i < 3 && j >= 0;i++){
        sumEnd += arr[j--][i];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The Diagonal Array sum is:- " << sum << endl;
    cout << "The Diagonal Array sum from end is:- " << sumEnd << endl;
    return 0;
}