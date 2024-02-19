#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, i = 0,ans=0;
    cin >> n;

    while (n != 0)
    {
        int bit = n % 10;
        if (bit == 1)
        {
            ans = ans + pow(10, i++);
        }
        n = n / 10;
    }
    cout << ans;
    return 0;
}