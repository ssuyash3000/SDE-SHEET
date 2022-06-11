#include <algorithm>
void help(vector<int> &v, int ind, vector<int> &v1,vector<vector<int>> &ans)
{
    if(ind == v.size()){

        ans.push_back(v1);
        return ;
    }
    help(v, ind + 1, v1, ans);
    v1.push_back(v[ind]);
    help(v, ind + 1, v1, ans);
    v1.pop_back();
}
vector<vector<int>> pwset(vector<int>v)
{
    sort(v.begin(), v.end());
    vector<vector<int>> ans;
    vector<int> v1;
    help(v, 0, v1, ans);
    return ans;
}
