#include <vector>

using namespace std;

class Solution {
    public:
        vector<vector<int>>dir={{0,-1},{0,1},{-1,0},{1,0}};
        void dfs(vector<vector<char>>&grid,int i,int j) {
            int n=grid.size(),m=grid[0].size();
            if(i>=n || j>=m || i<0 || j<0 || grid[i][j]=='0') return;
            grid[i][j] = '0';
            for(auto &a:dir) {
                dfs(grid,i+a[0],j+a[1]);
            }
        }
    
        int numIslands(vector<vector<char>>& grid) {
            int count=0;
            int n=grid.size(),m=grid[0].size();
            for(int i=0;i<n;i++) {
                for(int j=0;j<m;j++) {
                    if(grid[i][j]=='1') {
                        dfs(grid,i,j);
                        count++;
                    }
                }
            }
            return count;
        }
    };
