void helper(vector<int> &nums, vector<int> &ans, vector<int> &currSub){
    if(nums.size() == 0){
        int sum = 0;
        for(auto i : currSub)
            sum += i;
        ans.push_back(sum);
        return;
    }
    else{
        vector<int> v(nums.begin() + 1, nums.end());
        helper(v, ans, currSub);
        currSub.push_back(nums[0]);
        helper(v, ans, currSub);
        currSub.pop_back();
    }
}

vector<int> subsetSum(vector<int> &nums)
{   
    vector<int> ans;
    vector<int> currSub;
    helper(nums, ans, currSub);
    sort(ans.begin(), ans.end());
    return ans;
}
