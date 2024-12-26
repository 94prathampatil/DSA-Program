#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch[6] = "abcde";
    char *chp = &ch;
    ch++;
    cout << *chp << endl;
    return 0;
}