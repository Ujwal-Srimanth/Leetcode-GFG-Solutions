class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int breakpoint = -1;
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i+1] > arr[i]){
                breakpoint = i;
                break;
            }
        }
        if(breakpoint == -1){
            reverse(arr.begin(),arr.end());
            return;
        }
        for(int i=arr.size()-1;i>=breakpoint+1;i--){
            if(arr[i] > arr[breakpoint]){
                swap(arr[i],arr[breakpoint]);
                break;
            }
        }
        reverse(arr.begin()+breakpoint+1,arr.end());
    }
};