#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int *arr = new int[3][3];

    // for (int i = 0; i < 3;i++){
    //     for (int j = 0; j < 3;j++){
    //         cin >> arr[i][j];
    //     }
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<arr[i][j];
    //     }
    // }

    int n, m;
    cin >> n >> m;

    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout << "\n";
    }

    for (int i = 0; i < n;i++){
        delete[] arr[i];
    }

    delete[] arr;

    cout << "Free up all the memory:" << endl;
    return 0;
}