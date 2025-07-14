class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> left_max(n,INT_MIN);
        vector<int> right_max(n,INT_MIN);
        for(int i=1;i<n;i++)
        {
            left_max[i] = max(left_max[i-1],height[i-1]);
        }
        for(int i=n-2;i>=0;i--)
        {
            right_max[i] = max(right_max[i+1],height[i+1]);
        }
        int ans = 0;
        for(int i=1;i<n-1;i++)
        {
            int temp = min(left_max[i],right_max[i]);
            if(temp - height[i] >= 0)
            {
                ans += (temp - height[i]);
            }
        }
        return ans;
    }
};



#optimal

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int maxL = height[0];
        int maxR = height[n-1];
        int l = 0;
        int r = n-1;
        int ans = 0;
        while(l < r)
        {
            if(maxL <= maxR)
            {
                l++;
                if(maxL-height[l] >= 0) ans+=maxL-height[l];
                maxL = max(maxL,height[l]);
                

            }
            else
            {
                r--;
                if(maxR - height[r] >= 0) ans+=maxR-height[r];  
                maxR = max(maxR,height[r]);
            }
        }
        return ans;
       
    }
};