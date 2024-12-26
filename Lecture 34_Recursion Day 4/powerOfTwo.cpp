#include <bits/stdc++.h>
using namespace std;
int powerOfTwo(int a, int b)
{

    // Base Condition
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    int ans = powerOfTwo(a, b / 2);

    if (b & 1)
    {
        return a * ans * ans;
    }
    else
    {
        return ans * ans;
    }
}
int main()
{
    int a, b;
    cout << "Enter the value of a and b:- ";
    cin >> a >> b;

    int ans = powerOfTwo(a, b);
    cout << a << " Raised to " << b << " = " << ans;
    return 0;
}