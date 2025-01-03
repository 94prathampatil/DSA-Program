#include <bits/stdc++.h>
using namespace std;

long long int squareRoot(int n)
{
    int s = 0;
    int e = n;

    long long int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        int square = mid * mid;

        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int temp)
{
    double factor = 1;
    double ans = temp;

    for (int i = 0; i < precision; i++) 
    {
        factor = factor / 10;  
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n = -1;
    cin >> n;
    int temp = squareRoot(n);
    cout << temp << endl;
    cout << "Square Root of Entered number in precision form:- " << morePrecision(n, 3, temp) << endl;

    return 0;
}