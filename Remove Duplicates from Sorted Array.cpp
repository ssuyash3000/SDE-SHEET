int removeDuplicates(vector<int> &arr, int n) {
	int i = 0;
    int j = 0;
    int count = 0;
    for(int i = 0; i + 1 < n; i++){
        
        if(arr[i] == arr[i + 1] ){
            count++;
            continue;
        }else if(count > 1) {
            arr[++j] = arr[i + 1];
            count = 0;
        }else
            j++;
    }
    return j + 1;
}
