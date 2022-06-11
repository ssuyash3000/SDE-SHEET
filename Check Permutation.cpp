bool areAnagram(string &str1, string &str2){
//     sort(str1.begin(), str1.end());
//     sort(str2.begin(), str2.end());
    
//     return str1 == str2;
    vector<int> v1(256);
    vector<int> v2(256);
    for(auto i : str1){
        v1[i] += 1;
    }
    for(auto i : str2){
        v2[i] += 1;
    }
    return v1 == v2;
}
