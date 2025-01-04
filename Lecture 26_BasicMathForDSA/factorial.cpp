#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = -1;
    cout << "Enter the number:- " << endl;
    cin >> n;

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = ((fact % 7) * (i % 7) % 7);
    }
    cout << endl
         << fact;
    return 0;
}