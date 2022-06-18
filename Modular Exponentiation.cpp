#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {    
    if(n == 0){
        return 1;
    }
    if(n % 2 == 0){
        long long int ans = (modularExponentiation(x, n/2, m))%m;
        return (ans*ans)%m;
    }
    else{
        long long int ans = (modularExponentiation(x, (n-1)/2, m))%m;
        return (((ans*ans)%m)*x)%m;
    }
}
