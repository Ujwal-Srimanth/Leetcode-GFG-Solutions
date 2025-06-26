class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int,int> mpp;
        int prefix_sum = 0;
        int cnt = 0;
        int sum = 0;
        mpp[0] = 1;
        for(int i=0;i<n;i++){
            sum += arr[i];
            int rem = sum - k;
            if(mpp[rem] > 0){
                cnt+=mpp[rem];
            }
            mpp[sum] += 1;
        }
        return cnt;
    }
};