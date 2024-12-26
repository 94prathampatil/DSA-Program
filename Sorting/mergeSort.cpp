#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int> &nums, int low, int high, int mid)
{
    int left = low;
    int right = mid+1;
    vector<int> temp;
    while (left <= mid && right <= high)
    {
        if (nums[left] <= nums[right])
        {
            temp.push_back(nums[left++]);
        }
        else
        {
            temp.push_back(nums[right++]);
        }
    }

    while (left <= mid)
    {
        temp.push_back(nums[left++]);
    }

    while (right <= high)
    {
        temp.push_back(nums[right++]);
    }

    for (int i = low; i <= high; i++)
    {
        nums[i] = temp[i - low];
    }
}
void divideArray(vector<int> &nums, int low, int high)
{

    if (low == high)
        return;
    int mid = (low + high) / 2;

    divideArray(nums, 0, mid);
    divideArray(nums, mid + 1, high);
    mergeSort(nums, low, high, mid);
}

int main()
{
    int n;
    cout << "Enter the size of array:- ";
    cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int n = 0;
        cin >> n;
        nums.push_back(n);
    }

    divideArray(nums, 0, nums.size());

    cout << "The merge sort of inputed Array is:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}