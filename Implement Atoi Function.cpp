int atoi(string str) {
   
    int pow = 1;
    int ans = 0;
    for(int i = str.size() - 1; i >= 0; i--){
        if(str[i] >= '0' and str[i] <= '9'){
            int currnum = str[i] - '0';
            ans = ans  + currnum * pow;
            pow *= 10;
        }
    }
    if(str[0] == '-'){
        ans = ans * (-1);
    }
    return ans;
}
