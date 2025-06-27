class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        long long org_1 = (long long)n*(n+1)/2;
        long long org_2 = (long long)n*(n+1)*(2*n+1)/6;
        long long sum_1 = 0;
        long long sum_2 = 0;
        for(int i=0;i<n;i++){
            sum_1 += (long long)arr[i];
            sum_2 += (long long)arr[i]*arr[i];
        }
        long long m = sum_1-org_1;
        long long p = (sum_2 - org_2)/(m);
        
        long long x = (m+p)/2;
        long long y = x-m;
        
        return {(int)x,(int)y};
    }
};