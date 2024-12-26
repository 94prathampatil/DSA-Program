#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[50];
    cin>>name;
    int cnt=0;
    int i=0;
    while(name[i++]!='\0'){
        cnt++;
    }
    cout<<"Length of the entered string is:-"<<cnt;
    return 0;
}