#include <iostream>
using namespace std;

void FibSeries(int n)
{
    int a = 0, b = 1, c;
    cout << n << "th Number of series is:-" << endl;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        if (i == n)
        {
            cout << c;
            break;
        }
        a = b;
        b = c;
    }
}
int main()
{
    int n;
    cin >> n;
    FibSeries(n);
    return 0;
}