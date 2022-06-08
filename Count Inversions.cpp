#include <bits/stdc++.h> 
long long merge(long long *arr, int s, int e){
    int mid = s + ((e - s) / 2);
    int l1 = mid - s + 1;
    int l2 = e - mid;
    long long int *left = new long long [l1];
    long long int *right = new long long [l2];
    for(int i = 0; i < l1; i++){
        left[i] = arr[i + s];
    }
    for(int i = 0; i < l2; i++){
        right[i] = arr[i + mid + 1];
    }
    int i = 0;  int j = 0;
    int k = s;
    int count = 0;
    while (i < l1 and j < l2){
        if(left[i] > right[j]){
            count += l1 - i ;
            arr[k] = right[j];
            j++; k++;
        }else{
            arr[k] = left[i];
            i++; k++;
        }
    }
    while(i < l1){
        arr[k++] = left[i++];
    }
    while(j < l2){
        arr[k++] = right[j++];
    }
    return count;
}
long long mergeSort(long long*arr, int s, int e){
    if(s >= e){
        return 0;
    }
    int mid = s + ((e - s) / 2);
    long long int ans1 = mergeSort(arr, s, mid);
    long long int ans2 = mergeSort(arr, mid + 1, e);
    long long int ans3 = merge(arr,s , e);
    return ans1 + ans2 + ans3;
}

long long getInversions(long long *arr, int n){
    // Write your code here.
    long long ans = mergeSort (arr, 0, n - 1);
    return ans;
}
