

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int right_max = INT_MIN;
        vector<int> ans;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]>=right_max){
                ans.emplace_back(arr[i]);
                right_max = arr[i];
            }
            else{
                right_max = max(right_max,arr[i]);
            }
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};