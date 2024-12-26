#include<bits/stdc++.h>
using namespace std;

int squareRoot(int s, int e, int n){
    
    if(s > e)
        return e;
    long long int mid = s + (e - s) / 2;
    int square = mid * mid;

    if(square == n){
        return mid;
    }
    else if(square < n){
        return squareRoot(mid + 1, e, n);
    }
    else{
        return squareRoot(s, mid - 1, n);
    }
}
int main()
{
    int n = -1;
    cout << "Enter the number:- ";
    cin >> n;

    cout<<"Enter number is the sqaure root of "<<squareRoot(0, n, n)<<" :)";
    return 0;
}