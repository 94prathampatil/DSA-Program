#include <iostream>
using namespace std;

int main()
{
    int n = 0, i = 1;
    cin >> n;

    while (i <= n)
    {
        int j = 1, cnt = i;
        while (j <= i)
        {
            cout << cnt << " ";
            cnt--;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}