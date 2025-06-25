class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxele=nums[0];
        int cnt = 1;
        for(int i=1;i<nums.size();i++){
            if(cnt == 0){
                maxele = nums[i];
            }
            if(nums[i] == maxele){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return maxele;
    }
};