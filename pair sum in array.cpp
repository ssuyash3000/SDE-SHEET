#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
    // Write your code here.
    sort(arr.begin(), arr.end());
    int i = 0; 
    int j = arr.size() - 1;
    vector<vector<int>> ans;

    while(i < j){
        int currSum = arr[i] + arr[j];
        if(currSum > s){
            j--;
        }else if(currSum < s){
            i++;
        }else{
            if(arr[i] == arr[j])
            {
                int count = j - i + 1;
                int totalPair = (count * (count - 1)) / 2;
                for(int i1 = 0; i1 < totalPair; i1++){
//                     cout << i << " " << j << " ";
//                     cout << arr[i] << " " << arr[j] << "\n";
                    ans.push_back({arr[i], arr[j]});
                }
                return ans;
            }
            else{
                int count1 = 0;
                int ele1 = arr[i];
                
                int count2 = 0;

                int ele2 = arr[j];
                while(i <= j and arr[i] == ele1){
                    count1 ++; i++;
                }
                while(i <= j and arr[j] == ele2){
                    count2 ++; j --;
                }
                int totalPair = count1 * count2;
                for(int i = 0; i < totalPair; i++){
                    ans.push_back({ele1, ele2});
                }
            }

        }

        
    } return ans;  
}
