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

    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;

        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}