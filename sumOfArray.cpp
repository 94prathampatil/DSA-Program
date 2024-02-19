#include <iostream>
using namespace std;

int main()
{
    int n = 0, arr[100], sum = 0;
    cout << "Enter the size of Array:-";
    cin >> n;
    cout << "Enter the " << n << "size of Element:-" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout << "Sum of the array is:-" << sum;
    return 0;
}