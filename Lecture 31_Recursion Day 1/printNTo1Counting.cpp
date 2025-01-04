// Print the N to 1 integers using recursive function.

#include <bits/stdc++.h>
using namespace std;

void printNToOne(int n)
{
    if(n==0){
        return;
    }

    cout << n << " ";
    printNToOne(n - 1);
}
int main()
{
    int n = -1;
    cout << "Enter the value of n:- ";
    cin >> n;
    printNToOne(n);
    return 0;
}