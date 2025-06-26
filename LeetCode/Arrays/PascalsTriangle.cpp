class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({1});
        if(numRows > 1){
            ans.push_back({1,1});
        }
        else{
            return ans;
        }
        for(int i=3;i<=numRows;i++){
            vector<int> temp = ans.back();
            vector<int> tempans;
            tempans.push_back(1);
            for(int i=0;i<temp.size()-1;i++){
                tempans.push_back(temp[i]+temp[i+1]);
            }
            tempans.push_back(1);
            ans.push_back(tempans);
        }
        return ans;
    }
};




//trying for a optimal
class Solution {
public:
    vector<int> generateRow(int rowNumber){
        int ans = 1;
        vector<int> ret;
        ret.push_back(1);
        for(int i=1;i<rowNumber;i++){
            ret.push_back((ans*(rowNumber-i))/i);
            ans = (ans*(rowNumber-i))/i;
        }
        return ret;
    }
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> ans;
       for(int i=1;i<=numRows;i++){
        ans.push_back(generateRow(i));
       }
       return ans;
    }
};