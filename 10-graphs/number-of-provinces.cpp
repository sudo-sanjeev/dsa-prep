#include <vector>

using namespace std;

class Solution {
    public:
    vector<vector<int>>g;
    vector<bool>vis;

    void dfs(int root) {
        vis[root]=true;
        for(auto a:g[root]) {
            if(!vis[a]) {
                dfs(a);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size(),count=0;
        g.resize(n);
        vis.resize(n,false);
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(isConnected[i][j]) {
                    g[i].push_back(j);
                }
            }
        }

        for(int i=0;i<n;i++) {
            if(!vis[i]) {
                dfs(i);
                count++;
            }
        }

        return count;

    }
};
