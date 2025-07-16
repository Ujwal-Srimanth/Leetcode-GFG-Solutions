class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        int l = 0;
        int r = 0;
        int minlen = INT_MAX;
        int cnt = 0;
        int sIndex = -1;
        unordered_map<char,int> mpp(256);
        for(int i=0;i<m;i++)
        {
            mpp[t[i]]++;
        }
        while(r<n)
        {
            if(mpp[s[r]] > 0)
            {
                cnt = cnt+1;
            }
            mpp[s[r]]--;
            while(cnt == m)
            {
                if(r-l+1 < minlen)
                {
                    minlen = min(minlen,r-l+1);
                    sIndex = l;
                }
                mpp[s[l]]++;
                if(mpp[s[l]] > 0) cnt=cnt-1; 
                l++;
            }
            r++;
        }
        return sIndex == -1 ? "" : s.substr(sIndex, minlen);
    }
};