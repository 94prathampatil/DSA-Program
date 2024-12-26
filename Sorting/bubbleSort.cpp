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

    //Bubble Sort 
    for(int i=1;i<n;i++){           //ith time the loop will run. 
        for(int j=0;j<n-i;j++){         //n-i because, the array's last (n-i) position element is sort at every iteration. 
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                for(int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}