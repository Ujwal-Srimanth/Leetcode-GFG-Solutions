class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int count = 1;
        int ls = nums[0];
        int maxcount = 1;
        for(int i=1;i<n;i++){
            if(nums[i] == ls + 1){
                ls = nums[i];
                count++;
                maxcount = max(count,maxcount);
            }
            else if(nums[i]!=ls+1 && nums[i]!=ls){
                count = 1;
                ls = nums[i];
                maxcount = max(count,maxcount);
            }
        }
        return maxcount;
    }
};



//Optimal approach
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int n = nums.size();
        unordered_set<int> sp;
        int maxcount = 1;
        for(int i=0;i<n;i++){
            sp.insert(nums[i]);
        }
        for(auto it: sp){
            if(sp.find(it-1) == sp.end()){
                int x = it;
                int count = 1;
                while(sp.find(x+1)!=sp.end()){
                    count = count+1;
                    x = x+1;
                }
                maxcount = max(maxcount,count);
            }
        }
        return maxcount;
    }
};