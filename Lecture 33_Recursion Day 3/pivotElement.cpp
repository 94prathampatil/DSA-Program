#include<bits/stdc++.h>
using namespace std;

int findPivot(int *arr, int s, int e, int fun){

    cout << "Recursive call of Function:- " << fun++ << endl;
    for (int i = s; i <= e;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int mid = s + (e - s) / 2;
    //Base Condition
    if(s >= e){
        return e;
    }

    if(arr[mid] >= arr[0]){
        return findPivot(arr, mid + 1, e, fun);
    }
    else{
        return findPivot(arr, s, mid, fun);
    }
}
int main()
{
    int arr[100], n;
    cout << "Enter the size of array:- ";
    cin >> n;

    cout << "Enter the " << n << " size of array elements:- " << endl;
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int pivotIndex = findPivot(arr, 0, n - 1, 0);

    cout << "Pivot element of Rotated Sorted array is:- " << arr[pivotIndex] << endl;
    return 0;
}