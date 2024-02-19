#include<iostream>
using namespace std;


int findPivot(int a[],int n){
    int s=0,e=n-1,mid=s+(e-s)/2;

    while(s<e){
        if(a[mid]>=a[0]){
            s=mid+1;
        }
        else{
            mid=e;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int n=0,a[100];
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int index=findPivot(a,n);
    if(index){
        cout<<"Pivot Element at:-"<<index<<" Location."<<endl;
    }
    else{
        cout<<"Pivot Element not found."<<endl;
    }
    return 0;
}