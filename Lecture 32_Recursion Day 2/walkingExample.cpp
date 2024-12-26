#include <bits/stdc++.h>
using namespace std;

void reachHome(int src, int dest)
{
    cout << "Steping by :- " << src << endl;
    // base case
    if (src == dest)
    {
        cout << "Ghari Pohochalo...." << endl;
        return;
    }

    // recursive call
    reachHome(src+1, dest);
}
int main()
{
    int dest = 10;
    int src = 1;

    cout << endl;
    cout << "Start Walking towards home...." << endl;
    reachHome(src, dest);
    return 0;
}