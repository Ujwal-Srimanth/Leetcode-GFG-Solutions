class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        
        int count = 1;
         int i = 1;
         int j = 0;
         int maxcount = 1;
         while(i<arr.size() && j<arr.size())
         {
             if(dep[j] < arr[i])
             {
                 count--;
                 j++;
             }
             else if(dep[j] >= arr[i])
             {
                 count++;
                 i++;
             }
             maxcount = max(maxcount,count);
         }
         return maxcount;
    }
};
