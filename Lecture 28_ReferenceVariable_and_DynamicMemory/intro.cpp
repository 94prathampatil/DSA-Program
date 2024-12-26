#include <bits/stdc++.h>
using namespace std;

void update(int& n){
    n = n + 1;
}
int main()
{
    int n = 10;
    cout << "Before value of n:- " << n << endl;
    update(n);
    cout << "After value of n:- " << n << endl;
    // int i = 10;
    // // creating reference variable of i;
    // int &j = i;

    // cout << ++i << " " << ++j << endl;

    return 0;
}