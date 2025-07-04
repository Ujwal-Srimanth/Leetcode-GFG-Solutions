class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 2 ;
        int n = nums.size();
        for(int j=2;j<n;j++)
        {
            if(nums[j]!=nums[i-2])
            {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;  
    }
};