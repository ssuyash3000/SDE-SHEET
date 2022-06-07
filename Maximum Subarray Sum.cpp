#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long int ans = 0;
    long long int currMax = 0;
    for(int i = 0; i < n; i++){
        if(currMax < 0){
            currMax = 0;
        }
        currMax += arr[i];
        if(ans < currMax){
            ans = currMax;
        }
    }
    return ans;
}
