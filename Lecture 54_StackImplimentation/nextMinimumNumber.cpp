#include <bits/stdc++.h>
using namespace std;

vector<int> findNextMinimum(vector<int> arr, int n)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> ans(n);
    stack<int> st;
    st.push(-1);

    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (st.top() >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);
    }

    return ans;
}
int main()
{
    vector<int> arr = {2, 1, 4, 3};

    vector<int> ans = findNextMinimum(arr, 4);

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " --> " << ans[i] << endl;
    }

    return 0;
}