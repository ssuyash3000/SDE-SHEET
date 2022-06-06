#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
    map<int, int> mp;
    for(auto i : arr){
        mp[i] += 1;
        if(mp[i] == 2){
            return i;
        }
    }
}
