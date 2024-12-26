#include <bits/stdc++.h>
using namespace std;

void reverseString(int i, string &str)
{
    cout << "Call of " << i << " Reverse String is:- " << str << endl;
    int n = str.length();
    // Base Condition when i greater than j ---> STOP;
    if (i > n - i - 1)
    {
        return;
    }
    // Processing on String;
    swap(str[i++], str[n - i - 1]);
    reverseString(i, str);
}
int main()
{
    string str = "";
    cout << "Enter the String:- ";
    cin >> str;

    reverseString(0,  str);
    cout << "Reverse String is :- " << str << endl;

    return 0;
}