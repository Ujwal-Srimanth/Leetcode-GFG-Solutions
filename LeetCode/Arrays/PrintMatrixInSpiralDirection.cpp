class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left = 0;
        int top = 0;
        int right = matrix[0].size();
        int bottom = matrix.size();
        vector<int> ans;
        while(left<right && top<bottom ){
        for(int i=left ; i<right;i++){
            ans.push_back(matrix[top][i]);
        }
        top = top+1;

        for(int i=top;i<bottom;i++){
            ans.push_back(matrix[i][right-1]);
        }

        right = right - 1;

        if(top<bottom){
        for(int i=right-1;i>=left;i--){
            ans.push_back(matrix[bottom-1][i]);
        }
         bottom = bottom - 1;
        }
        if(left<right){
       
        for(int i=bottom-1;i>=top;i--){
            ans.push_back(matrix[i][left]);
        }
        left = left+1;
        }
        }
        return ans;
    }
};