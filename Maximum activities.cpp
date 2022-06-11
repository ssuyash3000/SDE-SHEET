#include <algorithm>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    vector<pair<int, int>> ac;
    for(int i = 0; i < start.size(); i++){
        ac.push_back({finish[i], start[i]});
    }
    sort(ac.begin(), ac.end());
    int ans = 1;
    int prevF = ac[0].first;
    for(int i = 1; i < ac.size(); i++)
    {
        if(ac[i].second >= prevF){
            prevF = ac[i].first;
            ans++;
        }
    }
    return ans;
}
