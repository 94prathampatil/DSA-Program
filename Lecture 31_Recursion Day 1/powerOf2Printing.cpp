#include <bits/stdc++.h>
using namespace std;

double powerOfTwo(double n)
{
    if (n == 0)
        return 1;

    // int smallProblem = powerOfTwo(n - 1);
    // int bigProblem = 2 * smallProblem;

    // return bigProblem;

    return 2 * powerOfTwo(n - 1);
    
}
int main()
{
    double n = -1;
    cout << "Enter the value of n:- ";
    cin >> n;
    double ans = powerOfTwo(n);
    cout << "Power of two of inputed n is:-" << ans << endl;
    return 0;
}