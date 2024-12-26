#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100];
    int n = 0, target = 0;
    cout << "Enter the size of array:-";
    cin >> n;
    cout << "Enter the target sum:-";
    cin >> target;

    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int top = 0;
    int bottom = 0;
    int sum = 0;
        sum += arr[1];
        while(bottom <= n){
        if(sum == target){
            cout << top << " " << bottom << endl;
            break;
        }
        if(sum < target){
            bottom++;
            sum = sum + arr[bottom];
        }
        if(sum > target){
            sum = sum - arr[top];
            top++;
        }
    }
    return 0;
}