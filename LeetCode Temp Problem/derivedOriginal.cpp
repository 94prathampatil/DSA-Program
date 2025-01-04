// Derived the original Array from the prefix sum array;
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> prefixSum = {0, 6, 12, 20, 30};
    vector<int> original(prefixSum.size());

    original[0] = prefixSum[0];

    for (int i = 1; i < prefixSum.size();i++){
        original[i] = prefixSum[i] - prefixSum[i - 1];
    }

    for(auto i : original){
        cout << i << " ";
    }

    return 0;
}