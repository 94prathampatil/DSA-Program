// Find out the sum of minimum and maximum element from the array from the k size window

#include<bits/stdc++.h>
using namespace std;

int solve(int *arr, int n, int k){
    deque<int> maxi(k);
    deque<int> mini(k);

    for (int i = 0; i < k;i++){
        while(!maxi.empty() && [maxi.back()] <= arr[i]){
            maxi.pop_back();
        }

        while(!mini.empty() && [mini.back()] >= arr[i]){
            mini.pop_back();
        }

        mini.push_back(i);
        maxi.push_back(i);

        int ans = 0;
        ans += arr[maxi.front()] + arr[mini.front()];

        for (int i = 0; i < n;i++){

            while(!maxi.empty() && i - maxi.front() >= k){
                maxi.pop_back();
            }
            while(!mini.empty() && i - mini.front() >= k){
                mini.pop_back();
            }

            maxi.push_back(i);
            mini.push_back(i);
            
            ans += arr[maxi.front()] + arr[mini.front()];
        }

    }
}
int main(){
    int arr[7] = {2, 5, -1, 7, -3, -1, -1};
    int k = 4;
    cout << solve(arr, 7, k) << endl;
}