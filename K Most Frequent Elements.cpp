#include<bits/stdc++.h>
using namespace std;
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    map<int, int> mp;
    for(auto i : arr){
        mp[i] += 1;
    }
    vector<pair<int, int> > v;
    for(auto i : mp){
        v.push_back({i.second, i.first});
    }
    sort(v.begin(), v.end(), greater<pair<int, int>>());
    vector<int> ans;
    for(int i = 0; i < k; i++){
        ans.push_back(v[i].second);
    }
    sort(ans.begin(), ans.end());
    return ans;
}
