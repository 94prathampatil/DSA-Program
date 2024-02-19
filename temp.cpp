#include<bits/stdc++.h>
using namespace std;

int main(){
    int nums[100][100];
    int row=0,col=0;
    cout<<"Enter the number rows and columns:- ";
    cin>>row>>col;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>nums[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<nums[j][i];
        }
        cout<<endl;
    }
    return 0;
}