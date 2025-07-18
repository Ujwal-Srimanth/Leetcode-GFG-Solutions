class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
       map<long long,int> preSumMap;
       long long sum = 0;
       int maxLen = 0;
       for(int i=0;i<arr.size();i++){
           sum += arr[i];
           if(sum == k){
               maxLen = max(maxLen,i+1);
           }
           long long rem = sum - k;
           if(preSumMap.find(rem)!=preSumMap.end()){
               int len = i - preSumMap[rem];
               maxLen = max(maxLen,len);
           }
           if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum] = i; 
           }
       }
       return maxLen;
    }
};

//optimal if array only has positives and 0s not negatives;

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
     int left = 0,right = 0;
     long long sum = a[0];
     int maxLen = 0;
     int n = a.size();
     while(right < n){
         while(sum > k && left <= right){
             sum -= a[left];
             left++;
         }
         if(sum == k){
             maxLen = max(maxLen,r-l+1);
         }
         if(right < n) sum+=a[right];
     }
    }
};