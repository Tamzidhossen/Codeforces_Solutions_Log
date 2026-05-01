class Solution {
public:

    bool isPossible(int row, int col, vector<string>&board, int n) {
        //upper-left diagonal
        int rrow = row, ccol = col;
        while(row >= 0 and col >= 0) {
            if(board[row][col] == 'Q')return false;
            row--;
            col--;
        }

        //same-row
        row = rrow;
        col = ccol;
        while(col >= 0) {
            if(board[row][col] == 'Q')return false;
            col--;
        }

        //lower-left diagonal
        row = rrow;
        col = ccol;
        while(row < n and col >= 0) {
            if(board[row][col] ==  'Q')return false;
            row++;
            col--;
        }

        return true;
    }

    void solve(vector<string>&board, vector<vector<string>> &ans, int col, int n) {
        if(col == n) {
            ans.push_back(board);
            return;
        }

        for(int row = 0; row < n; row++) {
            if(isPossible(row, col, board, n)) {
                board[row][col] =  'Q';
                solve(board, ans, col+1, n);
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        solve(board, ans, 0, n);
        
        return ans;
    }
};