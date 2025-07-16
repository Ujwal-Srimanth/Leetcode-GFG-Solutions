class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        int zeros = 0;
        int maxlen = 0;
        while(r<n)
        {
            if(nums[r]==0)
            {
                if(zeros<k)
                {
                    maxlen = max(maxlen,r-l+1);
                    zeros++;
                    r++;
                }
                else
                {
                    if(nums[l]==0)
                    {
                        zeros--;
                    }
                    l++;
                }
            }
            else
            {
                maxlen = max(maxlen,r-l+1);
                r++;
            }
        }
        return maxlen;
    }
};


cleaner code 
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        int zeros = 0;
        int maxlen = 0;
        while(r<n)
        {
            if(nums[r]==0) zeros++;
            while(zeros>k)
            {
                if(nums[l]==0) zeros--;
                l++;
            }
            maxlen = max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};


//optimal 

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        int zeros = 0;
        int maxlen = 0;
        while(r<n)
        {
            if(nums[r]==0) zeros++;

            if(zeros>k)
            {
                if(nums[l]==0) zeros--;
                l++;
            }
            else
            {
                maxlen = max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};



