#include <iostream>
using namespace std;

int setBit(int a)
{
    int cnt = 0;
    while (a != 0)
    {
        int bit = a & 1;
        if (bit == 1)
        {
            cnt++;
        }
        a = a >> 1;
    }
    return cnt;
}

int main()
{
    int a = 0, b = 0;
    cin >> a >> b;
    cout << "Sum of Set of a and b is:-" << setBit(a) + setBit(b);
    return 0;
}