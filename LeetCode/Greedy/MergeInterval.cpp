class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        vector<vector<int>> ans;
        ans.push_back(arr[0]);

        for(int i=1;i<n;i++)
        {
            vector<int> x = ans[ans.size()-1];
            if(arr[i][0] > x[1]) 
            {
                ans.push_back(arr[i]);
            }
            else if(arr[i][1] > x[0])
            {
                ans[ans.size()-1][1] = max(arr[i][1],ans[ans.size()-1][1]);
            }
        }
        return ans;
    }
};