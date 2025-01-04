#include<bits/stdc++.h>
using namespace std;

int findPeak(int *arr, int n){
    
}
int main()
{
    int arr[100];
    int n = -1;
    cout << "Enter the size of array:- ";
    cin >> n;

    cout << "Enter the " << n << " size elements:-" << endl;
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    findPeak(arr, n);
    return 0;
}