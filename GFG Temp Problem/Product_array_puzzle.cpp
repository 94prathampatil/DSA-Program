#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter the size of vector: ";
    cin >> n;

    vector<long long int> arr(n);
    cout << "Enter the vector elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<long long int> ans(n, 1);

    // Left products
    long long int left_product = 1;
    for (int i = 0; i < n; i++)
    {
        ans[i] = left_product;
        left_product *= arr[i];
    }

    // Right products
    long long int right_product = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] *= right_product;
        right_product *= arr[i];
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
