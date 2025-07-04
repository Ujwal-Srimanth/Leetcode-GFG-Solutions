class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left_product(n,1);
        vector<int> right_product(n,1);

        for(int i=1;i<n;i++)
        {
            left_product[i]=left_product[i-1]*nums[i-1];
        }

        int rightProduct = 1;
        for(int i=n-2;i>=0;i--)
        {
            left_product[i]*=rightProduct*nums[i+1];
            rightProduct*=nums[i+1];
        }

        return left_product;
    }
};