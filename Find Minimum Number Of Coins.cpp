int findMinimumCoins(int amount) 
{
    int count = 0;
    int arr[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    for(int i = 8; i >= 0; ){
        if(amount - arr[i] < 0){
            i--;
        }else if(amount - arr[i] == 0){
            count++; break;
        }else{
            amount -= arr[i];
            count++;
        }
    }
    return count;
}
