#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0, arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        // We consider that first element is already sorted. That is why loop started from 1
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else    
                break;
        }
        arr[j+1]=temp;
    }


    cout<<"Sorted Array is:- "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}