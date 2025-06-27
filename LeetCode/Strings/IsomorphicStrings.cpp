class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        unordered_map<char,char> mpp;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i]) != mp.end()){
                if(mp[s[i]] != t[i] ){
                    return false;
                }
            }
            if(mpp.find(t[i]) != mpp.end()){
                if(mpp[t[i]] != s[i] ){
                    return false;
                }
            }
            mp[s[i]] = t[i];
            mpp[t[i]] = s[i];
        }
        return true;
        
    }
};