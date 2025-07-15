class Solution {
public:
    int countNeighbours(vector<vector<int>>& board,int r,int c)
    {
        int row = board.size();
        int col = board[0].size();
        int cnt = 0;
        for(int i=r-1;i<=r+1;i++)
        {
            for(int j=c-1;j<=c+1;j++)
            {
                if((i==r && j==c) || i<0 || j<0 || i==row || j==col )
                {
                   continue; 
                }
                if(board[i][j] == 1 || board[i][j]==3)
                {
                    cnt++;
                }
            }
        }
         return cnt;
    }
    void gameOfLife(vector<vector<int>>& board) {

        //if 1 has [2,3] lives
        // if 0 has 3 it lives
        // rest cases it dies

        // 0 0 0
        // 1 0 1
        // 0 1 2
        // 1 1 3
        int r = board.size();
        int c = board[0].size();

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                int cnt = countNeighbours(board,i,j);
                if(board[i][j])
                {
                    if(cnt == 2 || cnt == 3)
                    {
                        board[i][j] = 3;
                    }
                }
                else
                {
                    if(cnt == 3)
                    {
                        board[i][j] = 2;
                    }
                }

            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(board[i][j]==1) board[i][j] = 0;
                if(board[i][j]==2 || board[i][j]==3) board[i][j]=1;
            }
        }        
    }
};