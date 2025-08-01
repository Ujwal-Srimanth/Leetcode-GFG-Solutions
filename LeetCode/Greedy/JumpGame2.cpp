class Solution {
public:
    int jump(vector<int>& nums) {\
        int n = nums.size();
        int jumps = 0;
        int l = 0;
        int r = 0;
        int farthest = 0;
        while(r<n-1){
            for(int i=l;i<=r;i++){
                farthest = max(farthest,i+nums[i]);
            }
            l = r+1;
            r = farthest;
            jumps++;
        }
        return jumps;
    }
};