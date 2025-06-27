class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp;
        if (s.length() != t.length()) return false;
        for(int i=0;i<s.size();i++){
            mpp[s[i]] += 1;
            mpp[t[i]] -= 1;
        }

        for(auto& it : mpp){
            if(it.second !=0){
                return false;
            }
        }
        return true;
    }
};