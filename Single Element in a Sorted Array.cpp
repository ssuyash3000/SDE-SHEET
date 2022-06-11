#include <algorithm>
int uniqueElement(vector<int> arr, int n)
{
	int ans = 0;
    for(auto i : arr){
        ans = ans ^ i;
    }
    return ans;
//     sort(arr.begin(), arr.end());
//     for(int i = 0; i + 1 < arr.size(); i++){
//         if(arr[i] != arr[i + 1])
//             return arr[i];
//         i++;
//     }
//     return arr[arr.size() - 1];
}
