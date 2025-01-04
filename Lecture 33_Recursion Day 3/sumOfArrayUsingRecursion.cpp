#include<bits/stdc++.h>
using namespace std;

int sumOfArray(int arr[], int size){
    //Base case
    // int sum = 0;
    if(size == 0)
        return 0;
    if(size == 1){
        return arr[0];
    }
    int sum = arr[0] + sumOfArray(arr + 1, size - 1);
    return sum;
}
int main()
{
    int n = 0;
    int nums[100];
    cout << "Enter the size of array:-" << endl;
    cin >> n;

    cout << "Enter the " << n << "size of array elements:-" << endl;
    for (int i = 0; i < n;i++){
        cin >> nums[i];
    }

    int sum = sumOfArray(nums, n);
    cout << "The Sum of Inputed Array is:- " << sum << endl;
    return 0;
}