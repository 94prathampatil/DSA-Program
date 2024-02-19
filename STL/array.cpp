#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main(){
    array<int,4> a={1,2,3,4}; 
    cout<<a.at(1)<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;

    vector<int> v(5,1);
    
    cout<<v.at(3);
}