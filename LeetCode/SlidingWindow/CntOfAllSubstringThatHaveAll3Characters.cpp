class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> mpp;
        mpp['a']=-1;
        mpp['b']=-1;
        mpp['c']=-1;
        int cnt = 0;
        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]] = i;
            if(mpp['a'] == -1 || mpp['b'] == -1 || mpp['c'] == -1)
            {
                continue;
            }
            int mina = min(mpp['a'],mpp['b']);
            int minb = min(mina,mpp['c']);
            cnt += (minb+1);
        }
        return cnt;
    }
};