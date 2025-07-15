class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9);
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> squares(9);

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.') continue;
                char curr = board[i][j];
                int index = (i/3)*3 + j/3;
                if(row[i].count(curr) || col[j].count(curr) || squares[index].count(curr))
                {
                    return false;
                }

                row[i].insert(curr);
                col[j].insert(curr);
                squares[index].insert(curr); 
            }
        }
        return true;

    }
};