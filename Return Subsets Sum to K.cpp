
void helper(vector<int> &arr, int n, int k, vector<int> &currSub, vector<vector<int>> &ans, int ind = 0)
{
    if(k == 0){
        ans.push_back(currSub);
        return;
    }else if( n == ind or k < 0)
        return;
    else{
        //vector<int> v(arr.begin() + 1, arr.end());
        currSub.push_back(arr[ind]);
        helper(arr, n, k - arr[ind], currSub, ans, ind + 1);
        currSub.pop_back();
        helper(arr, n, k, currSub, ans, ind + 1);

    }
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<int> v;
    vector<vector<int>> ans;
    helper(arr, n, k, v, ans);
    return ans;

}
