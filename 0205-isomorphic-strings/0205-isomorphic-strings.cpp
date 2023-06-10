class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> arr;
        map<char,char> hsh;
        
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<" "<<t[i]<<" "<<(arr.find(s[i])==arr.end())<<"\n";
            if(arr.find(s[i])==arr.end() && hsh.find(t[i])==hsh.end()){
                hsh[t[i]]=s[i];
                arr[s[i]]=t[i];
            }
            else{
                if((hsh[t[i]]!=s[i]) || (arr[s[i]]!=t[i])) {
                    return false;
                }
            }
        }
        return true;
    }
};