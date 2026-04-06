#include <vector>
#include <queue>

using namespace std;

class Solution {
    public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j]==2)q.push({i,j});
            }
        }

        vector<vector<int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
        int count=0;
        
        while(!q.empty()) {
            int candidates=q.size();
            bool toggle=false;
            for(int i=0;i<candidates;i++) {
                auto candidate=q.front();
                q.pop();
                for(auto a:dir) {
                    int x=candidate.first+a[0],y=candidate.second+a[1];
                    if(x<0 || y<0 || x>=n || y>=m) {
                        continue;
                    }

                    if(grid[x][y]==1) {
                        toggle=true;
                        grid[x][y]=2;
                        q.push({x,y});
                    }
                }
            }
            if(toggle) {
                count++;
            }
        }

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j]==1)return -1;
            }
        }

        return count;
    }
};
