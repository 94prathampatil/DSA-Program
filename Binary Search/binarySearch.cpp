#include<bits/stdc++.h>
using namespace std;

int main(){
    int nums[100];
    int n=-1;

    cout<<"Enter the size of the array:- "<<endl;
    cin>>n;

    cout<<"Enter the "<<n<<" elements of Array"<<endl;

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int target=-1;

    cout<<"Enter the Targeted element:-"<<endl;
    cin>>target;

    int start=0,end=n-1;
    int mid=start+(end-start)/2;

    while (start<=end)
    {
        if(nums[mid]==target){                                  
            cout<<"Targeted Element found at "<<mid<<" Location"<<endl;
            return 0;
        }
        if(target>nums[mid]){
            start=mid+1;
        }

        if(target<nums[mid]){
            end=mid-1;        
        }
        mid=start+(end-start)/2;    
    }
    
    cout<<"Targeted Element not found in array:("<<endl;
    return 0;
    
}