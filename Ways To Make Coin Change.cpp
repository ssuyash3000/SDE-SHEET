
long long help(int *denominations, int n, int value, long long **dp){
    if(value == 0){
        return 1;
    }else if(n == 0 or value < 0){
        return 0;
    }
    long long ans1 = 0, ans2 = 0;
    if(value -  denominations[0] >= 0 and dp[n][value -  denominations[0]] == -1)
        ans1 =  help(denominations, n, value - denominations[0], dp);
    else if(value -  denominations[0] >= 0)
        ans1 = dp[n][value - denominations[0]];
    
    if(n - 1 >= 0 and dp[n - 1][value] == -1)
        ans2 = help(denominations + 1, n - 1, value, dp);
    else if(n - 1 >= 0)
        ans2 = dp[n - 1][value];
    
    dp[n][value] = (ans1 + ans2);
    
    return ans1 + ans2;
}

long long  countWaysToMakeChange(int *denominations, int n, int value)
{
    long long  **dp = new long long *[n + 1];
    for(int i = 0; i < n + 1; i++){
        dp[i] = new long long  [value + 1];
        for(int j = 0; j < value + 1; j++)
            dp[i][j] = -1;
    }
    long long ans = help(denominations, n, value, dp);
    return ans;
}
