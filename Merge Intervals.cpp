bool cmp(vector<int> &v1, vector<int> &v2){
    return v1[0] < v2[0];
}
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end(), cmp);
    vector<vector<int>> ans;
    ans.push_back(intervals[0]);
    for(int i = 1; i < intervals.size(); i++){
        if(ans[ans.size() - 1][1] < intervals[i][0]){
            ans.push_back(intervals[i]);
        }else{
            ans[ans.size() - 1][1] = max(intervals[i][1], ans[ans.size() - 1][1]);
        }
        
    }
    return ans;
}
