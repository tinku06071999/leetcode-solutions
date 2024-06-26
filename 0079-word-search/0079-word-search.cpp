class Solution {
public:
    bool solve(int sr, int sc,int k,vector<vector<char>>& board, string word , int m, int n){
         if(k == word.length())return true;
         if(sr < 0|| sr == n|| sc<0 || sc == m || board[sr][sc] != word[k])return 0;
         
         
         char c = board[sr][sc];
         board[sr][sc] = '#';

         bool up = solve(sr-1, sc, k+1, board, word, m, n);
         bool down = solve(sr+1, sc, k+1, board, word, m, n);
         bool left = solve(sr, sc-1, k+1, board, word, m, n);
         bool right = solve(sr, sc+1, k+1, board, word, m, n);

         board[sr][sc] = c;

         return up||down || left || right;
    }


    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        int k = word.size();
        int sr =0, sc = 0;

        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                if(board[i][j] == word[0] ){
                    if(solve(i,j,0,board, word, m,n))
                    return true;
                }
            }
        }
       return false;
    }
};