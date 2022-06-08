string fourSum(vector<int> &arr, int target, int n) {
    unordered_map<int, pair<int, int>> mp;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            mp[arr[i] + arr[j]] = {i, j};
        }
    }
    for(auto i : mp){
        int currSum = i.first;
        int indexL = i.second.first;
        int indexR = i.second.second;
        
        int newTarget = target - currSum;
        if(mp.find(newTarget) != mp.end()){
            //pair<int, pair<int, int> > p = mp[newTarget];
            int indexL1 = (mp[newTarget]).first;
            int indexR1 = (mp[newTarget]).second;
            if(indexL != indexL1 and indexL != indexR1 and indexR != indexR1 and indexR != indexL1)
                return "Yes";
        }
    }
    return "No";
}
