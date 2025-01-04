#include <bits/stdc++.h>
using namespace std;


vector<int> main(){
    vector<int> count(100, 0);
    vector<int> nums(10);
    // int n = 0;
    // cout << "Enter the size of array:-";
    // cin >> n;

    // for (int i = 0; i < n;i++){
    //     cin >> nums[i];
    // }

    for (int i = 0; i < nums.size();i++){
        count[nums[i]]++;
    }

    // for (int i = 0; i < n;i++){
    //     cout << i << " count is " << count[i] << endl;
    // }

    vector<int> ans;
    int max = *max_element(count.begin(), count.end());

    while(max--){
        int min = *min_element(count.begin(), count.end());
        auto index = find(count.begin(), count.end(), min);
        int i = distance(count.begin(), index);
        while(min--){
            ans.push_back(i);
        }
    }

    return ans; 
}