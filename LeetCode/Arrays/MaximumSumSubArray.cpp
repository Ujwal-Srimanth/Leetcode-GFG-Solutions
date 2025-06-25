#include <algorithm>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    if(nums.size()==1) return nums[0];
       int sum = 0;
       int maxsum = 0;
       int start = 0;
       for(int i=0;i<nums.size();i++){
            if(nums[i] >= 0) break;
            else start = i+1;
       }  
       if(start == nums.size()){
        int maxelem = *std::max_element(nums.begin(), nums.end());
        return maxelem;
       }
       for(int i = start;i<nums.size();i++){
            sum+=nums[i];
            if(sum < 0){
                sum = 0;
            }
            maxsum = max(sum,maxsum);
       }
       return maxsum;
    }
};


#include <algorithm>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int sum = nums[0];
        for(int i=1;i<nums.size();i++){
            sum = max(sum+nums[i],nums[i]);
            maxsum = max(sum,maxsum);
        }
        return maxsum;
    }
};



//to print the asub array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currSum = nums[0];

        int start = 0, end = 0, tempStart = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (currSum + nums[i] < nums[i]) {
                currSum = nums[i];
                tempStart = i;
            } else {
                currSum += nums[i];
            }

            if (currSum > maxSum) {
                maxSum = currSum;
                start = tempStart;
                end = i;
            }
        }

        // Print the subarray
        cout << "Maximum Subarray: ";
        for (int i = start; i <= end; i++) {
            cout << nums[i] << " ";
        }
        cout << "\n";

        return maxSum;
    }
};
