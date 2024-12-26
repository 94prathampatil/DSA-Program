class Solution
{
private:
    int isSorted(vector<int> &nums, int i, int k)
    {
        int maxi = -1;
        int f = 0;
        for (int j = i; j < k - 1; j++)
        {
            if (nums[j] < nums[j + 1])
            {
                f = 1;
            }
            else
            {
                f = 0;
            }
        }

        if (f == 0)
        {
            return -1;
        }
        else
        {
            return *max_element(nums.begin() + i, nums.begin() + i + k);
        }
    }

public:
    vector<int> resultsArray(vector<int> &nums, int k)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        vector<int> ans;

        if (k == 1)
        {
            return nums;
        }

        for (int i = 0; i < nums.size() - k + 1; i++)
        {
            ans.push_back(isSorted(nums, i, k));
        }

        return ans;
    }
};