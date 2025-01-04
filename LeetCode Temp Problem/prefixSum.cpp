#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = -1;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    vector<int> preSum(n + 1);
    preSum[0] = 0;

    for (int i = 1; i <= n;i++){
        preSum[i] = v[i - 1] + preSum[i - 1];
    }

    for(auto i:preSum){
        cout << i << " ";
    }
    
    return 0;
}