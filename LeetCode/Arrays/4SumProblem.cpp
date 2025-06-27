class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        vector<vector<int>> ans;
        for(int i=0;i<n-3;i++){
            if(i > 0 && arr[i] == arr[i-1]) continue;
            for(int j=i+1;j<n-2;j++){
                if(j > i+1 && arr[j] == arr[j-1]) continue;
                int k = j+1;
                int l = n-1;
                while(k<l){
                    long long sum = 1LL * arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum == target){
                        ans.push_back({arr[i],arr[j],arr[k],arr[l]});
                        k++;
                        l--;
                        while(k<l && arr[k]==arr[k-1]) k++;
                        while(k<l && arr[l]==arr[l+1]) l--;
                    }
                    else if(sum < target)
                    {
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }
        return ans;
        
    }
};