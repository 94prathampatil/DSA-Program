#include <iostream>
#include <string.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int num)
    {
        int temp = num;
        int digit = 0;
        int rev = 0;

        while (num != 0)
        {
            digit = num % 10;
            rev = (rev * 10) + digit;
            num /= 10;
        }
        if (temp = rev)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    int PalinArray(int a[], int n)
    {
        // code here
        string str[n];
        for (int i = 0; i < n; i++)
        {
            if (isPalindrome(a[i]))
            {
                str[i] = "true";
            }
            else
            {
                str[i] = "false";
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (str[i] == "false")
            {
                return 0;
                break;
            }
        }

        return 1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.PalinArray(a, n) << endl;
    }
}
// } Driver Code Ends