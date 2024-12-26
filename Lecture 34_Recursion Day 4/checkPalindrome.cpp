#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string &str, int i, int j )
{

    // Base Condition if i > j ---> STOP
    if (i > j)
    {
        return true;
    }

    if (str[i++] == str[j--])
    {
        checkPalindrome(str, i, j);
    }
    else
    {
        return false;
    }
}
int main()
{
    string str = "";
    cout << "Enter the String:- ";
    cin >> str;

    bool check = checkPalindrome(str, 0, str.length() - 1);

    if (check)
    {
        cout << "The Entered String is Palindrome :)" << endl;
    }
    else
    {
        cout << "The Entered String is not Palindrome :(" << endl;
    }
    return 0;
}