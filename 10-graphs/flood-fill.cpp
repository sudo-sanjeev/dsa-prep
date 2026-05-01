#include <vector>
#include <queue>

using namespace std;

class Solution {
    public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initColor = image[sr][sc];
        if (initColor == color) return image;
        vector<vector<int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
        queue<pair<int,int>>q;
        q.push({sr,sc});
        int n=image.size(),m=image[0].size();
        image[sr][sc]=color;
        while(!q.empty()) {
            auto node=q.front();
            q.pop();
            for(auto a:dir) {
                int nx=node.first+a[0],ny=node.second+a[1];
                if(nx<0 || ny<0 || nx>=n || ny>=m) continue;

                if(image[nx][ny]==initColor) {
                    q.push({nx,ny});
                    image[nx][ny]=color;
                }
            }
        }
        return image;
    }
};
