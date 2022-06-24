#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    //Approach 1 
    //     map<int, int> mp;
    //     for(auto i : arr){
    //         mp[i] +=1;
    //     }
    //     vector<int> ans;
    //     for(auto i : mp){
    //         if(i.second  > floor(arr.size()/3)){
    //             ans.push_back(i.first);
    //         }
    //     }
    //     return ans;
    //Approach 2
    //intiution -> there can't be more then two majority(n/3) elements 
    int first = 0, second = 0;
    int count1 = 0; int count2 = 0;
    for(int i = 0; i < arr.size(); i++){
        if(count1 == 0){
            count1 ++; 
            first = arr[i];
        }
        else if(arr[i] == first)
            count1++;
        else if(count2 == 0){
            count2++; 
            second = arr[i];
        }
        else if(arr[i] == second)
            count2++;
        else{
            count1--;
            count2--;
        }
    }
    count1 = 0;
    count2 = 0;
    for(auto i : arr){
        if(i == first){
            count1++;
        }
        if(i == second){
            count2++;
        }
    }
    vector<int> ans;
    if(count1 > floor(arr.size()/3))
        ans.push_back(first);
    if(count2 > floor(arr.size()/3))
        ans.push_back(second);
    return ans;
}
