class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n = arr.size();
        int majority1 = 0;
        int majority2 = 0;
        int count1 = 0;
        int count2 = 0;

        for(int i=0;i<n;i++){
            if(arr[i] == majority1){
                count1+=1;
            }
            else if(arr[i] == majority2){
                count2+=1;
            }
            else if(count1 == 0){
                majority1 = arr[i];
                count1+=1;
            }
            else if(count2 == 0){
                majority2 = arr[i];
                count2+=1;
            }
            else{
                count1 -=1;
                count2 -=1;
            }
        }
        
        count1 = 0;
        count2 = 0;
        for(int i=0;i<n;i++){
            if(arr[i]==majority1){
                count1+=1;
            }
            else if(arr[i]==majority2){
                count2+=1;
            }
        }
        vector<int> ans;
        if(count1 > int((arr.size())/3))
        {
            ans.push_back(majority1);
        }
        if(count2 > int((arr.size())/3))
        {
            ans.push_back(majority2);
        }
        return ans;
    }
};