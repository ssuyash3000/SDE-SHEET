/*Problem Statement
You have been given an array/list 'ARR' consisting of 'N' integers. Your task is to find the majority element in the array. 
If there is no majority element present, print -1.
Note:
A majority element is an element that occurs more than floor('N' / 2) times in the array.
*/
//Approach - > Moore’s Voting Algorithm

#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
    int majEle = arr[0];
    int count = 1;
    for(int i = 1; i < n; i++){
        if(majEle == arr[i]){
            count++;
        }else {
            count--;
        }
        if(count == 0){
            majEle = arr[i];
            count = 1;
        }
    }
    int count1 = 0;
    for(int i = 0; i < n; i++){
        if(majEle == arr[i])
            count1++;
    }
    if(count1 > (n/2)){
        return majEle;
    }else{
        return -1;
    }
}
