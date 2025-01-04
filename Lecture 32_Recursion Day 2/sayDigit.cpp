#include<bits/stdc++.h>
using namespace std;

void sayDigit(int n, string arr[]){

    //Base Case
    if(n == 0)
        return ;

    //Processing 
    int digit = n % 10;
    n /= 10;

    // Recursive call
    sayDigit(n, arr);
    cout << arr[digit] << " ";
}
int main()
{
    string number[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n = -1;
    cout << "Enter the value:- ";
    cin >> n;
    sayDigit(n, number);
    return 0;
}