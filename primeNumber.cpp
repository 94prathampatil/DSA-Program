#include <iostream>
using namespace std;

int main()
{
    int n = 0, flag = 0, i = 2;
    cin >> n;

    while (i < n)
    {
        if (n % i == 0)
            flag = 1;
        i++;
    }
    if (flag)
    {
        cout << n << " Enter number is not Prime";
    }
    else
    {
        cout << n << " Enter number is Prime";
    }

    return 0;
}