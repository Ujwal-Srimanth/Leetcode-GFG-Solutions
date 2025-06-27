class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        unordered_map<int,int> ans;
        int sol = 0;
        int x = 0;
        ans[0] = 1;
        for(int i=0;i<n;i++){
            x = x ^ arr[i];
            int rem = x ^ k;
            if(ans.find(rem)!=ans.end()){
                sol += ans[rem];
                
            }
            ans[x] += 1;
        }
        return sol;
    }
};