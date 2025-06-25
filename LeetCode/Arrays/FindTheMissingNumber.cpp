#include <numeric>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);
        int sumorg = (n*(n+1))/2;
        return sumorg - sum;
    }
};


//other approach
//as for larger values sum computation may be expensive 
#include <numeric>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int xor1 = 0;
       int cor = 0;
       for(int i=0;i<nums.size();i++){
            xor1 = xor1^i;
            cor = cor^nums[i];
       }
    xor1 = xor1 ^ nums.size();
    return xor1 ^ cor;

    }
};