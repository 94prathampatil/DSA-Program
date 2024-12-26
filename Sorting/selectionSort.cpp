#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100];
    int n=-1;
    cout<<"Enter the size of Array:- "<<endl;
    cin>>n;
    cout<<"Enter the "<<n<<" numbers to array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0;
    while(i<n-1){
        int minI = i;
        int j = i + 1;
        while(j<n){
            if(arr[minI]>arr[j]){
                minI=j;
            }
            j++;
        }
        swap(arr[minI],arr[i]);
        i++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}