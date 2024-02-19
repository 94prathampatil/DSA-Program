#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0,arr[100];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    for(int i=0;i<n;i++){
        bool swapped=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[j],arr[i]);
                swapped = true;
            }
        }
        if(swapped = false){
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
}