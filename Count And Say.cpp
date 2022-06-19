string writeAsYouSpeak(int n) 
{
    string s;
    s.push_back('1');
    for(int k = 1; k < n; k++){
        string ans;
        for(int i = 0; i < s.size(); i++){
            int count = 1;
            char curr = s[i];
            while(i + 1< s.size() and s[i] == s[i + 1]){
                count ++; i++;
            }
            ans.push_back(count + '0' );
            ans.push_back(curr);
        }
        s = ans;
    }
    return s;
}
