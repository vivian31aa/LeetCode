class Solution {
public:
    void dfs(int x, int y,vector<vector<char>>& board){
        if(x<0||x>=board.size()||y<0||y>=board[0].size()||board[x][y]!='O')   return;
        board[x][y]='G';
        dfs(x+1,y,board);
        dfs(x-1,y,board);
        dfs(x,y+1,board);
        dfs(x,y-1,board);
    }
    void solve(vector<vector<char>>& board) {
        int m= board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            dfs(i,0,board);
            dfs(i,n-1,board);
        }
        for(int j=0;j<n;j++){
            dfs(0,j,board);
            dfs(m-1,j,board);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='G')    board[i][j]='O';
                else board[i][j]='X';
            }
        }
    }
};