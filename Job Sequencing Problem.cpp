#include <bits/stdc++.h>
bool comparator(vector<int> &v1, vector<int> &v2){
    return v1[1] > v2[1];
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    int ans = 0;
    int maxDeadline = 0;
    for(auto i : jobs){
        if(maxDeadline < i[0]){
            maxDeadline = i[0];
        }
    }
    sort(jobs.begin(), jobs.end(), comparator);
    vector<bool> slot(maxDeadline, true);
    for(int i = 0; i < jobs.size(); i++){
        if(slot[jobs[i][0] - 1] == true){
            ans += jobs[i][1];
            slot[jobs[i][0] - 1] = false;
        }
        else{
            int emptySlot = -1;
            for(int q = jobs[i][0] - 1; q >= 0; q--){
                if(slot[q] == true){
                    emptySlot = q;
                    break;
                }
            }
            if(emptySlot != -1){
                ans += jobs[i][1];
                slot[emptySlot] = false;
            }
        }




    }
    return ans;
}
