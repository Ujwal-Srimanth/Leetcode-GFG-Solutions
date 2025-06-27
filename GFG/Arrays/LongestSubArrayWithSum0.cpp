class Solution {
  public:
    int maxLen(vector<int>& arr) {
        // code here
        int n = arr.size();
        unordered_map<int,int> preSumMap;
        int sum = 0;
        int maxLen = 0;
        for(int i=0;i<n;i++){
            sum = sum + arr[i];
            if(sum == 0){
                maxLen = max(maxLen,i+1);
            }
            int rem = sum - 0;
            if(preSumMap.find(rem)!=preSumMap.end()){
                int j = preSumMap[rem];
                maxLen = max(maxLen,i-j);
            }
            if(preSumMap.find(sum)==preSumMap.end()){
                preSumMap[sum] = i;
            }
            
        }
        return maxLen;
        
    }
};