#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[10] = {23, 122, 41, 67};
    // cout << "Address of the first memory block is:- " << &arr << endl;

    // cout << "Address of the first integer of array is:- " << &arr[0] << endl;
    // cout << "4th " << *arr << endl;
    // cout << "5th " << *arr + 1 << endl;
    // cout << "6th " << *(arr + 1) << endl;
    // cout << "7th " << (*arr) + 1 << endl;
    // cout << "Increment of address:- " << (*arr)+1 << endl;

    // cout << "8th " << arr + 1 << endl;
    // cout << "9th " << arr << endl;
    // cout << 2 [arr];

    int arr[10];
    // int *ptr = &arr[];

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;
    return 0;
}