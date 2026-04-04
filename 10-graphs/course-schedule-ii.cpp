#include <vector>
#include <queue>

using namespace std;

class Solution {
    public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>indeg(numCourses,0);
        vector<vector<int>>g(numCourses);
        queue<int>q;
        vector<int>ans;
        for(auto a:prerequisites) {
            g[a[1]].push_back(a[0]);
            indeg[a[0]]++;
        }
        for(int i=0;i<numCourses;i++) {
            if(indeg[i]==0) {
                ans.push_back(i);
                q.push(i);
            }
        }

        while(!q.empty()) {
            int front = q.front();
            q.pop();
            for(auto a:g[front]) {
                indeg[a]--;
                if(indeg[a]==0) {
                    q.push(a);
                    ans.push_back(a);
                }
            }
        }
        if(ans.size()!=numCourses)return {};
        return ans;
    }
};
