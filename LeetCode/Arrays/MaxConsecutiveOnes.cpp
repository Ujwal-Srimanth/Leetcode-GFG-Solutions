class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
       int maxones = 0;
       int cntones = 0;
       for(int i=0;i<arr.size();i++){
        if(arr[i] == 1){
            cntones += 1;
        }
        else{
            cntones = 0;
        }
        maxones = max(maxones,cntones);
       }
       return maxones;
    }
};