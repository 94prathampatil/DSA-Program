#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0,nums[100];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }


    for(int i=0;i<n-1;i++){
        int minI=i;
        for(int j=i+1;j<n;j++){
            if(nums[j]>nums[minI]){
                minI=j;
            }
        }
        swap(nums[minI],nums[i]);
    }

    for(int i=0;i<n;i++){
        cout<<" "<<nums[i];
    }
}