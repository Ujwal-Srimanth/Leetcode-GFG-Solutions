// brute force o(n^2)
class Solution {
public:
    void rotateOne(vector<int>& nums){
        int temp = nums[nums.size()-1];
        for(int i=nums.size()-1;i>0;i--){
            nums[i] = nums[i-1];
        }
        nums[0] = temp;
    }
    void rotate(vector<int>& nums, int k) {
         for(int i=0;i<k;i++){
            rotateOne(nums);
         }
    }
};


//o(2n) appraoach with extra space
class Solution {
public:
    
    void rotate(vector<int>& nums, int k) {
         k = k % nums.size();
         vector<int> temp(nums.size(),0);
         for(int i=0;i<nums.size()-k;i++){
            temp[i+k] = nums[i];
         }
         for(int i=0;i<k;i++){
            temp[i] = nums[i+(nums.size()-k)];
         }
         for(int i=0;i<nums.size();i++){
            nums[i] = temp[i];
         }
    }
};


//optimal 
#include <algorithm>  // for reverse
class Solution {
public:
    
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};



