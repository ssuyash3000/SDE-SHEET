#include <algorithm>
bool cmp(pair<int, int> &p1, pair<int, int> &p2)
{
    double r1 = (double) p1.second / p1.first;
    double r2 = (double) p2.second / p2.first;
    
    return r1 > r2;
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(items.begin(), items.end(), cmp);
    double ans = 0.0;
    for(int i = 0; i < n and w != 0; i++){
        if(items[i].first <= w){
            ans += items[i].second;
            w -= items[i].first;
        }else{
            double r = (double)items[i].second / items[i].first;
            ans += (double)w * r;
            break;
        }   
    }
    return ans;    
}
