#include <algorithm>

vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    vector<pair<int, pair<int, int> >> vect;
    for(int i = 0; i < start.size(); i++){
        vect.push_back({end[i], {i+1, start[i]}});
    }
    sort(vect.begin(), vect.end());
    vector<int> ans;
    int prevEnd = vect[0].first;
    ans.push_back(vect[0].second.first);
    for(int i = 1; i < vect.size(); i++)
    {
        if(prevEnd < vect[i].second.second){
            
            prevEnd = vect[i].first;
            ans.push_back(vect[i].second.first);
        }
    }
    return ans;
}
