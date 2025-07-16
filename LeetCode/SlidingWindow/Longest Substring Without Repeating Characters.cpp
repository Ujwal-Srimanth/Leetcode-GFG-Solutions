class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char,int> mpp;
        int l = 0;
        int r = 0;
        int maxlen = 0;
        while(r<n)
        {
            if(mpp.find(s[r]) == mpp.end())
            {
                maxlen = max(maxlen,r-l+1);
                mpp[s[r]] = r;
                r++;
            }
            else
            {
                if(mpp[s[r]] >= l)
                {
                    l = mpp[s[r]] + 1;
                }
                else
                {
                    maxlen = max(maxlen,r-l+1);
                    mpp[s[r]] = r;
                     r++;
                }
             }
        }
        return maxlen;
        
    }
};