#include <iostream>
using namespace std;

int main()
{
    int n = 0, i = 1, cnt = i;
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << cnt << " ";
            j++;
            cnt++;
        }
        cout << endl;
        i++;
    }
    return 0;
}