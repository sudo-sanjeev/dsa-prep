#include <vector>
#include <string>

using namespace std;

class Solution {
    public:
    
    bool dfs(vector<vector<char>>&board,int row,int col,string &word,int idx,vector<vector<int>>&dir) {
        if(board[row][col]!=word[idx])return false;
        if(idx==(int)(word.size()-1)) {
            return true;
        }

        char store=board[row][col];
        board[row][col]='#';
        int n=board.size(),m=board[0].size();
        for(auto &a:dir) {
            int dx=row+a[0],dy=col+a[1];
            if(dx>=n || dy>=m || dx<0 || dy<0) {
                continue;
            }

            if(board[dx][dy] == word[idx+1] && dfs(board,dx,dy,word,idx+1,dir)) {
                board[row][col] = store; 
                return true;
            }
        }
        board[row][col]=store;
        return false;

        
    }

    bool exist(vector<vector<char>>& board, string word) {
        if (word.empty()) return true;
        if (board.empty() || board[0].empty()) return false;
        int n=board.size(),m=board[0].size();
        vector<vector<int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(board[i][j] == word[0] && dfs(board,i,j,word,0,dir)) {
                    return true;
                }
            }
        }
        return false;
    }
};
