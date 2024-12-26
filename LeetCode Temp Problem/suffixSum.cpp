#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 6, 12, 20, 30};
    vector<int> vec(v.size());

    vec[vec.size() - 1] = v[v.size() - 1];

    for (int i = v.size(); i >= 1;i--){
        vec[i] = v[i] + vec[i - 1];
    }

    for(auto i:vec){
        cout << i << " ";
    }

    return 0;
}