class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> arr;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                    arr.push_back({i,j});
                }
            }
        }
        for(auto it : arr){
            for(int i=0;i<m;i++){
                matrix[it.first][i] = 0;
            }
            for(int i=0;i<n;i++){
                matrix[i][it.second] = 0;
            }
        }
    }
};



//optimal o(1) space above os o(mn space not a good solution)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int extra = 1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0] = 0;
                    if(j == 0){
                        extra = 0;
                    }else{
                        matrix[0][j] = 0;
                    }
                }
            }
        }

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j] != 0 && (matrix[0][j] == 0 || matrix[i][0]==0)){
                    matrix[i][j] = 0;
                }
            }
        }

        if(matrix[0][0]==0){
            for(int i=0;i<n;i++){
                matrix[0][i] = 0;
            }
        }
        if(extra == 0){
            for(int i=0;i<m;i++){
                matrix[i][0] = 0;
            }
        }

    }
};