class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int n = arr.size();
        ans.push_back(arr[0]);
        for(int i=0;i<n;i++){
            vector<int>& temp = ans.back();
            if(temp[1] >= arr[i][0]){
                temp[1] = max(temp[1],arr[i][1]);
            }
            else{
                ans.push_back({arr[i][0],arr[i][1]});
            }
        }
        return ans;
    }
};