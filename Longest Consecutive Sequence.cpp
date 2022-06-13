#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    //unordered_map<int, bool> mp;
    unordered_set <int> mp;
    for(int i = 0; i < n; i++){
        mp.insert(arr[i]);
    }
    int max = 0;
    for(int i = 0; i < n; i++){
        int currMax = 0;
        int curr = arr[i];
        if(mp.find(curr - 1) == mp.end()){
            while(mp.find(curr) != mp.end()){
                
                curr++; currMax++;
            }
        }
        if(currMax > max)
            max = currMax;
    }
    return max;
}
