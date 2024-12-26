#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;

    int ans = climbStairs(n - 1) + climbStairs(n - 2);
    return ans;
}
int main()
{
    int stairs = 0;
    cout << "Enter the number of stairs you going to be climb:- ";
    cin >> stairs;
    int ans = climbStairs(stairs);
    cout << "Total Ways to climb is:- " << ans << endl;
    return 0;
}