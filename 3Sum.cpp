vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
    vector<vector<int>> ans;
    sort(arr.begin() , arr.end());
    for(int i = 0 ; i<n ; i++) {
        int left = i+1 ;
        int right = n-1;
        while(left<right){
            int sum = arr[left]+arr[right]+arr[i];
            if(sum == K) {
                ans.push_back({arr[i], arr[left], arr[right]});
                int x = arr[left] ;
                int y = arr[right] ;
                while(left<right && arr[left]==x){
                    left++ ;
                }
                while(left<=right && arr[right]==y){
                    right-- ;
                }
            }
            else if(sum < K){
                left++;
            }
            else{
                right--;

            }
        }
        while(i+1<n && arr[i]==arr[i+1]){
            i++ ;
        }
    }
    return ans;
}
