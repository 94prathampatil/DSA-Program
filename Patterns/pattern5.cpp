#include <iostream>
using namespace std;

int main()
{
    int n = 0, i = 1, cnt = 1;
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << cnt << " ";
            cnt++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}