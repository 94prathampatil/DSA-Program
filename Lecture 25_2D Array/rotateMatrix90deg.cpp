#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3];
    cout << "Enter the Array Elements:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Original Matrix:-" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "90 Degree Rotate Matrix is:-" << endl;
    for (int col = 0; col <=2;col++){
        for (int row = 2; row >= 0;row--){
            cout << arr[row][col]<<" ";
        }
        cout << endl;
    }
    return 0;
}