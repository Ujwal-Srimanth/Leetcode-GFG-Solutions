#include <bits/stdc++.h>
int kDistinctChars(int k, string &s)
{
    // Write your code here
    int maxlen = 0;
    int l = 0;
    int r = 0;
    int n = s.length();
    unordered_map<char,int> mpp;
    while(r<n)
    {
        mpp[s[r]]+=1;
        if(mpp.size() > k)
        {
            mpp[s[l]]--;
            if(mpp[s[l]]==0) mpp.erase(s[l]);
            l++;
        }

        if(mpp.size()<=k)
        {
            maxlen = max(maxlen,r-l+1);
        }
        r++;
    }
    return maxlen;
}


