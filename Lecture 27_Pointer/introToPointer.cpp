#include <bits/stdc++.h>
using namespace std;

void printAdrees(int *ptr)
{
    cout << *ptr << endl;
    cout << " Address pass as pointer is:-" << ptr << endl;
}
int main()
{
    int i = 10;
    cout << "Address of i variable is:-- " << &i << endl;
    int *ptr = &i;
    // cout << ptr << endl;
    // cout << ptr << endl;
    printAdrees(&i);
    return 0;
}