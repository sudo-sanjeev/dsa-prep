#include <vector>
#include <queue>

using namespace std;

class Solution {
    public:
        bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
            vector<vector<int>>g(numCourses);
            vector<int>indig(numCourses,0);
            for(auto a:prerequisites) {
                g[a[1]].push_back(a[0]);
                indig[a[0]]++;
            }
    
            queue<int>q;
            for(int i=0;i<numCourses;i++) {
                if(indig[i]==0) {
                    q.push(i);
                }
            } 
    
            while(!q.empty()) {
                int cur=q.front();
                q.pop();
                numCourses--;
                for(auto a:g[cur]) {
                    indig[a]--;
                    if(indig[a]==0) {
                        q.push(a);
                    }
                }
            }
            return numCourses==0;
        }
    };
