#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, ans = 0, i = 0;
    cin >> n;

    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i++)) + ans;
        n = n >> 1;
    }
    cout << ans;
    return 0;
}