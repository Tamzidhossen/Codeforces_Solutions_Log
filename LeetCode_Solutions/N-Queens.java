/**
 * DSA: Backtracking
 * Leetcode Problem 51. N-Queens
 * ব্যাখাঃ এই সমস্যাটিতে আমাদের একটি n x n বোর্ড দেওয়া হয় এবং আমাদের n টি রাণী (Queen) বসাতে হবে যাতে কোন দুটি রাণী একে অপরকে আক্রমণ করতে না পারে। রাণী একে অপরকে আক্রমণ করতে পারে যদি তারা একই সারি, কলাম, বা ডায়াগোনালে থাকে। আমাদের সেই সব সম্ভাব্য বোর্ড কনফিগারেশন বের করতে হবে যেখানে n টি রাণী সঠিকভাবে বসানো হয়েছে।
 * সমাধানঃ এই সমস্যাটির সমাধান করার জন্য আমরা ব্যাকট্র্যাকিং ব্যবহার করতে পারি। আমরা একটি রিকার্সিভ ফাংশন তৈরি করব যা প্রতিটি কলামে রাণী বসানোর চেষ্টা করবে। প্রতিটি কলামে, আমরা প্রতিটি সারিতে রাণী বসানোর চেষ্টা করব এবং চেক করব যে এটি সঠিক কিনা (অর্থাৎ, এটি অন্য কোনও রাণীকে আক্রমণ করছে না)। যদি এটি সঠিক হয়, তবে আমরা রাণীটি বোর্ডে বসাব এবং পরবর্তী কলামে যাওয়ার জন্য রিকার্সিভ কল করব। যদি পরবর্তী কলামে কোনও সমাধান না পাওয়া যায়, তবে আমরা রাণীটি আনপিক করব এবং পরবর্তী সারিতে চেষ্টা করব। এইভাবে, আমরা সব সম্ভাব্য কনফিগারেশন তৈরি করতে পারব।
 * টাইম কমপ্লেক্সিটি: O(n!) কারণ প্রথম কলামে n টি সম্ভাব্যতা রয়েছে, দ্বিতীয় কলামে n-1 টি সম্ভাব্যতা রয়েছে, এবং তাই চলতে থাকে।
 * স্পেস কমপ্লেক্সিটি: O(n^2) কারণ আমরা একটি n x n বোর্ড ব্যবহার করছি এবং রিকার্সিভ কল স্ট্যাকের গভীরতা সর্বোচ্চ n হতে পারে।
 */

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