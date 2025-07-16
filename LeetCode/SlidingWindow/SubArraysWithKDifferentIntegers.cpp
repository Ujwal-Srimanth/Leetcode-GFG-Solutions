class Solution {
public:
    int count(vector<int>& s, int k)
    {
        if(k<0) return 0;
        int n =  s.size();
        int l = 0;
        int r = 0;
        unordered_map<int,int> mpp;
        int cnt = 0;
        while(r<n)
        {
            mpp[s[r]]+=1;
            while(mpp.size()>k)
            {
                mpp[s[l]]-=1;
                if(mpp[s[l]]==0) mpp.erase(s[l]);
                l++;
            }
            cnt += (r-l+1);
            r+=1;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return count(nums,k)-count(nums,k-1);
    }
};